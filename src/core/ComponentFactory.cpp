#include "ComponentFactory.h"
#include <stdexcept>
#include <vector>

// Singleton instance method
ComponentFactory& ComponentFactory::instance() {
    static ComponentFactory factory;  // Static local instance (only one exists)
    return factory;  // Return reference to the static instance
}


// Register a component creation function with a name
void ComponentFactory::registerComponent(const std::string& name, std::function<std::unique_ptr<Component>()> creator) {
    creators[name] = std::move(creator);
}

// Create a component by name
std::unique_ptr<Component> ComponentFactory::createComponent(const std::string& name) const {
    auto it = creators.find(name);
    if (it != creators.end()) {
        return it->second();
    } else {
        throw std::runtime_error("Component not found: " + name);
    }
}

// Get a list of available components
std::vector<std::string> ComponentFactory::getAvailableComponents() const {
    std::vector<std::string> componentList;
    for (const auto& pair : creators) {
        componentList.push_back(pair.first);
    }
    return componentList;
}
