#pragma once

#include "Nguoi.h"

class NgheSi : public Nguoi {
   private:
    int namRaMat;
    string congTyTrucThuoc;

   public:
    NgheSi(/* args */);

    void nhap() {
        Nguoi::nhap();
        cin.ignore();

        cout << "Nhap nam ra mat: ";
        cin >> namRaMat;

        cout << "Nhap cong ty truc thuoc: ";
        getline(cin, congTyTrucThuoc);
    }

    void xuat() {
        Nguoi::xuat();
        cout << namRaMat << " " << congTyTrucThuoc;
    }

    ~NgheSi();
};

NgheSi::NgheSi(/* args */) {
}

NgheSi::~NgheSi() {
}
