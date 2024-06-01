#pragma once

#include "Nguoi.h"

class SinhVien : Nguoi {
   private:
    string truongDaiHoc;

   public:
    SinhVien() {
    }
    ~SinhVien() {
    }

    void nhap() {
        Nguoi::nhap();
        cin.ignore();

        cout << "Nhap ten truong dai hoc: ";
        getline(cin, truongDaiHoc);
    }

    void xuat() {
        Nguoi::xuat();
        cout << truongDaiHoc;
    }
};