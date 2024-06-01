#pragma once

#include "SinhVien.h"

class SinhVienDaiHoc: public SinhVien {
   public:
    SinhVienDaiHoc() {
    }
    ~SinhVienDaiHoc() {
    }

    void nhap() {
        SinhVien::nhap();

        cin.ignore();

        cout << "Nhap ten luan van: ";
        getline(cin, tenLuanVan);

        cout << "Nhap diem luan van: ";
        cin >> diemLuanVan;
    }

    void xuat() {
        SinhVien::xuat();

        cout << tenLuanVan << " " << diemLuanVan;
    }

    bool xetTotNghiep() override {
        if (tongSoTinChi >= 170 && diemTb >= 5 && diemLuanVan >= 5) {
            return true;
        }

        return false;
    }

    virtual int getType() override {
        return 2;
    }

   private:
    string tenLuanVan;
    float diemLuanVan;
};