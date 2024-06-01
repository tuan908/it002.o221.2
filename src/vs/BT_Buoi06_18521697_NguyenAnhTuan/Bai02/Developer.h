#pragma once

#include "Employee.h"

class Developer: public Employee {
   public:
    Developer();
    ~Developer();
    
    void nhap() {
        Employee::nhap();

        cout << "Nhap so gio lam overtime: ";
        cin >> otHours;
    }

    void xuat() {
        Employee::xuat();

        cout << otHours;
    }

    int getType() override {
        return 0;
    }

    float getSalary() override {
        return baseSalary + otHours * 200000;
    }
   
   private:
    float otHours;

};

Developer::Developer() {
}

Developer::~Developer() {
}