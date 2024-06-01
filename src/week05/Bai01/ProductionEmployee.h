#pragma once

#include "Employee.h"

class ProductionEmployee : public Employee {
   private:
    double baseSalary;
    int numberOfProducts;

   public:
    void input() {
        Employee::input();
        std::cout << "Enter base salary: ";
        std::cin >> baseSalary;
        std::cout << "Enter number of products: ";
        std::cin >> numberOfProducts;
        std::cin.ignore();
    }

    void calculateSalary() {
        salary = baseSalary + numberOfProducts * 5000;
    }

    void display() const {
        Employee::display();
        std::cout << baseSalary << " " << numberOfProducts << "\n";
    }
};
