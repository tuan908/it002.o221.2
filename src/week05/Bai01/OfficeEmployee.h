#pragma once

#include "Employee.h"

class OfficeEmployee : public Employee {
   private:
    int workingDays;

   public:
    OfficeEmployee(){};

    ~OfficeEmployee() {
    }

    void input() {
        Employee::input();
        cout << "Nhap so ngay lam viec: ";
        cin >> workingDays;
        cin.ignore();
    }

    void calculateSalary() {
        salary = workingDays * 100000;
    }

    void display() const {
        Employee::display();
        cout << workingDays << "\n";
    }
};
