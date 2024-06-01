#pragma once

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;

class Employee {
   protected:
    std::string name;
    std::string birthDate;
    double salary;

   public:
    Employee() {
    }

    string getName() {
        return name;
    }

    string getBirthday() {
        return birthDate;
    }

    double getSalary() const {
        return salary;
    }

    void calculateSalary() {
    }

    void input() {
        cin.ignore();
        cout << "Nhap ho ten: ";
        getline(cin, name);
        cout << "Nhap ngay thang nam sinh: ";
        getline(cin, birthDate);
    }

    void display() const {
        cout << name << " " << birthDate << " " << salary;
    }

    ~Employee() {
    }
};