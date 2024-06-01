#pragma once

#include "Nguoi.h"

class CaSi : public Nguoi {
   private:
    int namRaMat, soLuongBaiHat;

   public:
    CaSi(/* args */);

    void nhap() {
        Nguoi::nhap();

        cout << "Nhap nam ra mat: ";
        cin >> namRaMat;

        cout << "Nhap so luong bai hat: ";
        cin >> soLuongBaiHat;
    }

    void xuat() {
        Nguoi::xuat();
        cout << namRaMat << " " << soLuongBaiHat;
    }

    ~CaSi();
};

CaSi::CaSi(/* args */) {
}

CaSi::~CaSi() {
}
