//To be open, and transparent. Some code was done with the skills learned in this class, w3schools and stack overflow.
//Theme is original to me
//Most of code basics, structure was done with me. I used resources to help with certain parts!
//This is a small animal hospital themed game.
#include <iostream> // Include the iostream library for input and output
#include <string> // Include the string library for using string data type
#include "animal_hospital.h" // Include the custom AnimalHospital class header

// Start of the main program
int main() {
    // Print a welcome message and a brief description of the program.
    std::cout << "Welcome to the Animal Hospital!\n";
    std::cout << "This program will assign your pet to a department based on the service needed. Enjoy!\n\n";

    // Declare a string variable to store the pet's name
    std::string pet_name;
    // Prompt the user to enter the pet's name
    std::cout << "Please enter your pet's name: ";
    // Read the pet's name from user input
    std::getline(std::cin, pet_name);

    // Declare an integer variable to store the pet's age
    int pet_age;
    // Prompt the user to enter the pet's age
    std::cout << "Please enter your pet's age (in years): ";
    // Read the pet's age from user input
    std::cin >> pet_age;

    // Check if the pet's age is greater than 7 years
    if (pet_age > 7) {
        // Print a warning message for elderly pets
        std::cout << "\nDr. Smith says, \"There is risk to elderly patients when using anesthesia and administering certain vaccines.\"\n";
        // Declare a char variable to store the user's decision to proceed
        char proceed;
        // Prompt the user to decide whether to proceed
        std::cout << "Do you wish to proceed? (y/n): ";
        // Read the user's decision from user input
        std::cin >> proceed;
        // Check if the user chose not to proceed
        if (tolower(proceed) != 'y') {
            // Print a message indicating understanding and end the program
            std::cout << "\nDr. Smith says, \"We understand. If you need any assistance in the future, don't hesitate to come back!\"\n";
            return 0;
        }
    }

    // Ignore any leftover newline character in the input buffer
    std::cin.ignore();

    // Declare an integer variable to store the user's choice of service
    int choice;
    // Print the list of available services
         std::cout << "\nPlease select a service for your pet:\n";
         std::cout << "1. Spay\n";
         std::cout << "2. Neuter\n";
         std::cout << "3. Vaccines\n";
         std::cout << "4. Injury Treatment\n";
    // Prompt the user to enter their choice of service
         std::cout << "Enter your choice (1-4): ";
    // Read the user's choice from user input
         std::cin >> choice;

    // Create an AnimalHospital object
    AnimalHospital hospital;
    // Call the assignDepartment method to get the assigned department based on the user's choice
         std::string department = hospital.assignDepartment(choice);

    // Print the assigned department for the pet
         std::cout << "\nYour pet, " << pet_name << ", has been assigned to the " << department << " department.\n";

    // Call the explainDepartment method to get a description of the assigned department
         std::string explanation = hospital.explainDepartment(choice);
    // Print the department description
         std::cout << explanation << "\n";
    // Declare a char variable to store the user's decision to proceed with the service
    char proceed;
    // Prompt the user to decide whether to proceed with the selected service
         std::cout << "Would you like to proceed with the " << department << " service for your pet? (y/n): ";
    // Read the user's decision from user input
    std::cin >> proceed;

    // Check if the user chose to proceed with the service
    if (tolower(proceed) == 'y') {
        // Print a message indicating that the pet will be taken care of
        std::cout << "\nDr. Smith says, \"We will take great care of your pet!\"\n";
    }
    else {
        // Print a message indicating understanding if the user chose not to proceed with the service
        std::cout << "\nDr. Smith says, \"We understand. If you need any assistance in the future, don't hesitate to come back!\"\n";
    }

    // end
    return 0;
}
