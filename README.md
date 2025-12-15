# Animal Hospital OOP

A C++ console application that simulates an animal hospital check-in system. This project demonstrates object-oriented programming concepts including abstract classes, inheritance, and polymorphism.

## Overview

The program guides users through a pet check-in process at a veterinary hospital. Based on the selected service, pets are assigned to the appropriate department with relevant information about the procedures.

## Features

- Pet registration with name and age
- Elderly pet warning system (for pets over 7 years)
- Service selection menu:
  1. Spay
  2. Neuter
  3. Vaccines
  4. Injury Treatment
- Department assignment based on selected service
- Department explanations for each service type

## Project Structure

```
animalhospitaloop/
├── main.cpp              # Entry point and user interaction
├── animal_hospital.h     # Class declarations
├── animal_hospital.cpp   # Class implementations
└── README.md
```

## Classes

### DepartmentAssigner (Abstract Base Class)

An abstract class that defines the interface for department assignment:

| Method | Description |
|--------|-------------|
| `assignDepartment(int choice)` | Pure virtual function to assign a department |
| `explainDepartment(int choice)` | Pure virtual function to explain a department |

### AnimalHospital (Derived Class)

Inherits from `DepartmentAssigner` and implements the department logic:

| Method | Description |
|--------|-------------|
| `assignDepartment(int choice)` | Returns department name based on service choice |
| `explainDepartment(int choice)` | Returns description of the selected department |

## Departments

| Choice | Service | Department | Description |
|--------|---------|------------|-------------|
| 1 | Spay | Spay and Neuter | Surgical procedures to prevent reproduction |
| 2 | Neuter | Spay and Neuter | Surgical procedures to prevent reproduction |
| 3 | Vaccines | Vaccination | Protection against diseases (rabies, parvo, distemper) |
| 4 | Injury Treatment | Injury Treatment | Care for injured pets |

## Building the Project

### Using g++

```bash
g++ -o AnimalHospital main.cpp animal_hospital.cpp
```

### Using Visual Studio

Open the `.vcxproj` file in Visual Studio and build the solution.

## Running the Program

```bash
./AnimalHospital
```

## Example Usage

```
Welcome to the Animal Hospital!
This program will assign your pet to a department based on the service needed. Enjoy!

Please enter your pet's name: Buddy
Please enter your pet's age (in years): 3

Please select a service for your pet:
1. Spay
2. Neuter
3. Vaccines
4. Injury Treatment
Enter your choice (1-4): 3

Your pet, Buddy, has been assigned to the Vaccination department.
The Vaccination department provides essential vaccines to protect your pet from various diseases like rabies, parvo and distemper.
Would you like to proceed with the Vaccination service for your pet? (y/n): y

Dr. Smith says, "We will take great care of your pet!"
```

## OOP Concepts Demonstrated

- **Abstraction**: `DepartmentAssigner` defines an abstract interface
- **Inheritance**: `AnimalHospital` inherits from `DepartmentAssigner`
- **Polymorphism**: Virtual functions allow runtime method dispatch
- **Encapsulation**: Department logic is contained within the `AnimalHospital` class
