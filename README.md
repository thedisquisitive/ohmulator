# Ohmulator

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Supported Components](#supported-components)
- [Adding a New Component](#adding-a-new-component)
- [Contributing](#contributing)
- [License](#license)

## Introduction

**Ohmulator** is an open-source hardware component emulator built in C++. It allows users to simulate the behavior of basic electronic components, such as resistors, capacitors, inductors, and more complex components like transistors and potentiometers.

The project is designed to be an educational tool for understanding circuits and electronics, as well as a platform for experimentation.

## Features

- Simulate a wide range of electronic components like resistors, capacitors, inductors, diodes, transistors, potentiometers, and switches.
- Add new components to the system dynamically through a factory system.
- Simulate real-time voltage and current behavior in circuits.
- Extensible framework for adding new components and features.

## Installation

### Prerequisites

- C++17 or higher
- CMake 3.10 or higher
- A C++ compiler (GCC, Clang, or MSVC)
- (Optional) Google Test for running unit tests

### Steps

1. Clone the repository:

    ```bash
    git clone https://github.com/yourusername/ohmulator.git
    cd ohmulator
    ```

2. Create a build directory and generate the project files using CMake:

    ```bash
    mkdir build
    cd build
    cmake ..
    ```

3. Build the project:

    ```bash
    make
    ```

4. Run the emulator:

    ```bash
    ./emulator
    ```

## Usage

To use Ohmulator, you can simulate different components and build virtual circuits in `main.cpp`. Here’s a simple example that simulates a capacitor:

```cpp
#include "ComponentFactory.h"
#include <iostream>

int main() {
    // Create a capacitor with 1 µF capacitance
    auto capacitor = ComponentFactory::instance().createComponent("Capacitor");

    // Apply 5V across the capacitor and ground
    capacitor->applyVoltages(5.0, 0);

    // Output the voltage across the capacitor
    std::cout << capacitor->visualize() << ": Voltage = " << capacitor->output() << " V" << std::endl;

    return 0;
}
```

## To test new components, simply modify `main.cpp`, rebuild the project, and run the executable.

### Running Tests
If you have unit tests set up, you can run them with:

```bash
ctest --output-on-failure
```

### Supported Components
Ohmulator currently supports the following components:

- Resistors
- Capacitors
- Inductors
- Diodes
- Transistors (N-type, P-type)
- LEDs
- Switches (on/off)
- Potentiometers

### Adding a New Component
You can easily extend Ohmulator by adding new components to the system. Here's a basic outline of the steps:

1. **Create a Header File**: Define your component class in a new header file (e.g., `Capacitor.h`).
2. **Implement the Component**: Write the logic for your component in a corresponding `.cpp` file.
3. **Register the Component**: In `ComponentFactory.cpp`, register the component so that it can be created dynamically.
4. **Test the Component**: Add the new component to `main.cpp` and simulate its behavior.

For a detailed guide, check out our tutorial on adding components.

### Contributing
We welcome contributions from the community! Here's how you can get started:

1. Fork the repository.
2. Create a new branch for your feature or bugfix (`git checkout -b feature-branch`).
3. Commit your changes (`git commit -m 'Add new feature'`).
4. Push your branch (`git push origin feature-branch`).
5. Open a Pull Request.

Please ensure that your contributions adhere to our Code of Conduct and that any new components are thoroughly tested.

### License
Ohmulator is licensed under the GNU General Public License v3.0 (GPL-3.0). This means:

- You can use, modify, and distribute the project, but any changes or derivative works must also be open-source under the same license.
- You must provide access to the source code when distributing the software.

See the [LICENSE](LICENSE) file for more details.

<p align="center">Built with ♥ by the Ohmulator team.</p>
