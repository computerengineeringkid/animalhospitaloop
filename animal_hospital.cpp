// Include the header file for the AnimalHospital class
#include "animal_hospital.h"

// Define the assignDepartment function for the AnimalHospital class
std::string AnimalHospital::assignDepartment(int choice) {
    std::string department;

    // Use a switch statement to assign a department based on the provided choice
    switch (choice) {
    case 1:
    case 2:
        // Assign the Spay and Neuter department for cases 1 and 2
        department = "Spay and Neuter";
        break;
    case 3:
        // Assign the Vaccination department for case 3
        department = "Vaccination";
        break;
    case 4:
        // Assign the Injury Treatment department for case 4
        department = "Injury Treatment";
        break;
    default:
        // Return an error message for invalid choices
        department = "Invalid choice. Please try again.";
    }

    // Return the assigned department
    return department;
}

// Define the explainDepartment function for the AnimalHospital class
std::string AnimalHospital::explainDepartment(int choice) {
    std::string explanation;

    // Use a switch statement to provide an explanation based on the provided choice
    switch (choice) {
    case 1:
    case 2:
        // Explain the Spay and Neuter department for cases 1 and 2
        explanation = "The Spay and Neuter department handles surgeries to prevent pets from reproducing and it helps to stop overpopulation. This also helps prevent cancer and behavior problems!";
        break;
    case 3:
        // Explain the Vaccination department for case 3
        explanation = "The Vaccination department provides essential vaccines to protect your pet from various diseases like rabies, parvo and distemper.";
        break;
    case 4:
        // Explain the Injury Treatment department for case 4
        explanation = "The Injury Treatment department takes care of pets with injuries and provides the necessary treatment to help them heal in the quickest way possible.";
        break;
    default:
        // Return an error message for invalid choices
        explanation = "Invalid choice. Please try again.";
    }

    // Return the department explanation
    return explanation;
}
