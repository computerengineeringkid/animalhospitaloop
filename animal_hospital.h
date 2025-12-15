// Include the string library for using std::string
#include <string>

// Declare an abstract class named DepartmentAssigner with virtual functions
class DepartmentAssigner {
public:
    // Declare a pure virtual function assignDepartment that takes an integer choice and returns a string
    virtual std::string assignDepartment(int choice) = 0;

    // Declare a pure virtual function explainDepartment that takes an integer choice and returns a string
    virtual std::string explainDepartment(int choice) = 0;
};

// Declare a derived class AnimalHospital that inherits from the DepartmentAssigner class
class AnimalHospital : public DepartmentAssigner {
public:
    // Override the assignDepartment function in the derived class
    std::string assignDepartment(int choice) override;

    // Override the explainDepartment function in the derived class
    std::string explainDepartment(int choice) override;
};
