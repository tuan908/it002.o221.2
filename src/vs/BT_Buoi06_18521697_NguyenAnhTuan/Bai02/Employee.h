#pragma once

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::getline;
using std::vector;
using std::string;

class Employee {
   public:
    Employee();
    ~Employee();

    virtual void nhap() {
        cin.ignore();

        cout << "Nhap ma nhan vien: ";
        getline(cin, code);

        cout << "Nhap ten nhan vien: ";
        getline(cin, name);

        cout << "Nhap tuoi: ";
        cin >> age;

        cin.ignore();

        cout << "Nhap so dien thoai: ";
        getline(cin, phoneNumber);

        cout << "Nhap luong co ban: ";
        cin >> baseSalary;
    }

    virtual void xuat() {
        cout << code << " " << name << " " 
            << age << " " << phoneNumber << " " << email << " ";
    }

    virtual float getSalary() = 0;

    virtual int getType() = 0;

   protected:
    string code, name, phoneNumber, email;
    int age;
    float baseSalary;

};

Employee::Employee() {
}

Employee::~Employee() {
}