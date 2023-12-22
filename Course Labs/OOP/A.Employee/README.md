# Employee Management System

This repository contains a simple Employee Management System implemented in C++ with an associated header file (`employee.h`) and an application file (`main.cpp`). The system allows for the creation, modification, and display of employee information.

## Table of Contents

- [Employee Management System](#employee-management-system)
  - [Table of Contents](#table-of-contents)
  - [Description](#description)
  - [Files](#files)
  - [Usage](#usage)
  - [Building and Running](#building-and-running)
  - [Contributing](#contributing)
  - [License](#license)

## Description

The Employee Management System consists of a class `Employee` defined in the `employee.h` header file. This class encapsulates the properties and behaviors of an employee, including ID, salary, full name, and employment status.

## Files

1. **employee.h**: Header file containing the definition of the `Employee` class.

2. **main.cpp**: Application file implementing the main program to demonstrate the usage of the `Employee` class.

## Usage

The `Employee` class provides the following functionalities:

- **Constructor**: Initialize an employee object with default or provided values.
- **Setters and Getters**: Modify and retrieve employee information (ID, salary, full name, status).
- **Display**: Print employee information to the console.

## Building and Running

To build and run the application, follow these steps:

1. Ensure you have a C++ compiler installed on your system.

2. Compile the program:

   ```bash
   g++ main.cpp -o employee_management
   ```

   This command will generate an executable file named `employee_management`.

3. Run the executable:

   ```bash
   ./employee_management
   ```

   Follow the on-screen instructions to interact with the Employee Management System.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or create a pull request.
