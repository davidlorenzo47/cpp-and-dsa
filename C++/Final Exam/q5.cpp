#include <iostream>
#include <string>

class Employee {
protected:
    int employeeId;
    std::string employeeName;

public:
    Employee(int id, const std::string& name)
        : employeeId(id), employeeName(name) {}

    virtual double calculateSalary() = 0;
    virtual void displayInformation() = 0;
};

class Manager : public Employee {
private:
    int numberOfSubordinates;
    double baseSalary;
    double bonusPerSubordinate;

public:
    Manager(int id, const std::string& name, int subordinates, double base, double bonus)
        : Employee(id, name), numberOfSubordinates(subordinates), baseSalary(base), bonusPerSubordinate(bonus) {}

    double calculateSalary() override {
        return baseSalary + (bonusPerSubordinate * numberOfSubordinates);
    }

    void displayInformation() override {
        std::cout << "Manager Information:" << std::endl;
        std::cout << "ID: " << employeeId << std::endl;
        std::cout << "Name: " << employeeName << std::endl;
        std::cout << "Number of Subordinates: " << numberOfSubordinates << std::endl;
        std::cout << "Salary: " << calculateSalary() << std::endl;
    }
};

class Engineer : public Employee {
private:
    int expertiseLevel;
    double baseSalary;
    double bonusPerLevel;

public:
    Engineer(int id, const std::string& name, int level, double base, double bonus)
        : Employee(id, name), expertiseLevel(level), baseSalary(base), bonusPerLevel(bonus) {}

    double calculateSalary() override {
        return baseSalary + (bonusPerLevel * expertiseLevel);
    }

    void displayInformation() override {
        std::cout << "Engineer Information:" << std::endl;
        std::cout << "ID: " << employeeId << std::endl;
        std::cout << "Name: " << employeeName << std::endl;
        std::cout << "Expertise Level: " << expertiseLevel << std::endl;
        std::cout << "Salary: " << calculateSalary() << std::endl;
    }
};

int main() {
    // Create Manager object
    Manager manager(1, "Dhruvang Gondalia", 5, 250000.0, 10000.0);
    manager.displayInformation();

    std::cout << std::endl;

    // Create Engineer object
    Engineer engineer(2, "David Lorenzo", 3, 120000.0, 5000.0);
    engineer.displayInformation();

    return 0;
}