#pragma once

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::getline;
using std::string;
using std::vector;

class Nguoi {
   protected:
    string hoTen, ngaySinh, diaChi;

   public:
    Nguoi(/* args */);

    void nhap() {
        cin.ignore();

        cout << "Nhap ho ten: ";
        getline(cin, hoTen);

        cout << "Nhap ngay sinh: ";
        getline(cin, ngaySinh);

        cout << "Nhap dia chi: ";
        getline(cin, diaChi);
    }

    void xuat() {
        cout << hoTen << " " << ngaySinh << " " << diaChi << " ";
    }

    ~Nguoi();
};

Nguoi::Nguoi(/* args */) {
}

Nguoi::~Nguoi() {
}
