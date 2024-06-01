#pragma once

#include "SinhVien.h"

class SinhVienDaiHoc : public SinhVien {
   private:
    string tenLuanVan;
    double diemLuanVan;

   public:
    SinhVienDaiHoc(/* args */);
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
        if (this->getTongSoTinChi() >= 145 && this->getDiemTrungBinh() >= 5.0 &&
            this->diemLuanVan >= 5) {
            return true;
        } else {
            return false;
        }
    }

    int getType() override {
        return 1;
    }
    ~SinhVienDaiHoc();
};

SinhVienDaiHoc::SinhVienDaiHoc(/* args */) {
}

SinhVienDaiHoc::~SinhVienDaiHoc() {
}
