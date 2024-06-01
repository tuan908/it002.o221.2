#pragma once

#include "Nguoi.h"

class HocSinh : public Nguoi {
   private:
    int lop;
    string truong;

   public:
    HocSinh(/* args */);

    void nhap() {
        Nguoi::nhap();
        cin.ignore();

        cout << "Nhap lop: ";
        cin >> lop;

        cout << "Nhap truong: ";
        getline(cin, truong);
    }

    void xuat() {
        Nguoi::nhap();
        cout << lop << " " << truong;
    }

    ~HocSinh();
};

HocSinh::HocSinh(/* args */) {
}

HocSinh::~HocSinh() {
}
