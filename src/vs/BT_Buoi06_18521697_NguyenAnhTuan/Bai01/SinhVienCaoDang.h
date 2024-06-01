#pragma once

#include "SinhVien.h"

class SinhVienCaoDang: public SinhVien {
   public:
    SinhVienCaoDang() {
    }
    ~SinhVienCaoDang() {
    }

    void nhap() {
        SinhVien::nhap();

        cout << "Nhap diem thi tot nghiep: ";
        cin >> diemThiTotNghiep;
    }

    void xuat() {
        SinhVien::xuat();

        cout << diemThiTotNghiep;
    }

    bool xetTotNghiep() override {
        if (tongSoTinChi >= 120 && diemTb >= 5 && diemThiTotNghiep >= 5) {
            return true;
        }

        return false;
    }

    virtual int getType() override {
        return 1;
    }

   private:
    float diemThiTotNghiep;
};