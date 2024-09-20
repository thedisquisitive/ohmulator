#ifndef COMPONENT_FACTORY_H
#define COMPONENT_FACTORY_H

#include <functional>
#include <string>
#include <map>
#include <memory>
#include "Component.h"

class ComponentFactory {
public:
    // Singleton instance to ensure only one factory
    static ComponentFactory& instance();

    // Register a component creation function with a name
    void registerComponent(const std::string& name, std::function<std::unique_ptr<Component>()> creator);

    // Create a component by name
    std::unique_ptr<Component> createComponent(const std::string& name) const;

    // Get a list of available components
    std::vector<std::string> getAvailableComponents() const;

private:
    // Private constructor for singleton
    ComponentFactory() = default;

    // Map storing component creation functions
    std::map<std::string, std::function<std::unique_ptr<Component>()>> creators;
};

#endif // COMPONENT_FACTORY_H
