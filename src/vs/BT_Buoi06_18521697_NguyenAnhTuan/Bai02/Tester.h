#pragma once

#include "Employee.h"

class Tester : public Employee {
   public:
    Tester();
    ~Tester();

    void nhap() {
        Employee::nhap();

        cout << "Nhap so loi phat hien duoc: ";
        cin >> caughtErrors;
    }

    void xuat() {
        Employee::xuat();

        cout << caughtErrors;
    }

    float getSalary() override {
        return baseSalary + caughtErrors * 50000;
    }
    
    int getType() {
        return 1;
    }

   private:
    int caughtErrors;
};

Tester::Tester() {
}

Tester::~Tester() {
}