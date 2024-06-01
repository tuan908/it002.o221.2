// Mã số sinh viên: 1852167
// Họ và tên: Nguyễn Anh Tuấn
// Ngày sinh: 10/10/2000
// Lớp: IT002.O221

#pragma once

#include <iostream>
#include <string>

#include "SinhVien.h"

using namespace std;

class SinhVienDaiHoc : public SinhVien {
   private:
    string tenLuanVan;
    float diemLuanVan;

   public:
    SinhVienDaiHoc(/* args */);
    SinhVienDaiHoc(string mssv, string hoTen, string diaChi, int tongSoTinChi, float diemTB,
                   string tenLuanVan, float diemLuanVan);
    ~SinhVienDaiHoc();

    string getTenLuanVan() {
        return this->tenLuanVan;
    }

    void setTenLuanVan(string value) {
        this->tenLuanVan = value;
    }

    float getDiemLuanVan() {
        return this->diemLuanVan;
    }

    void setDiemLuanVan(float value) {
        this->diemLuanVan = value;
    }

    void nhap() {
        SinhVien::nhap();
        getline(cin, this->tenLuanVan);
        cin >> this->diemLuanVan;
    }

    void xuat() {
        SinhVien::xuat();
        cout << "Ten luan van: " << this->tenLuanVan << "\n";
        cout << "Diem luan van: " << this->diemLuanVan << "\n";
    }

    bool xetTotNghiep() const {
        return tongSoTinChi >= 145 && diemTB >= 5 && diemLuanVan >= 5;
    }
};

SinhVienDaiHoc::SinhVienDaiHoc(/* args */) {
}

SinhVienDaiHoc::~SinhVienDaiHoc() {
}

SinhVienDaiHoc::SinhVienDaiHoc(string mssv, string hoTen, string diaChi, int tongSoTinChi,
                               float diemTB, string tenLuanVan, float diemLuanVan) {
    this->mssv = mssv;
    this->hoTen = hoTen;
    this->diaChi = diaChi;
    this->tongSoTinChi = tongSoTinChi;
    this->diemTB = diemTB;
    this->tenLuanVan = tenLuanVan;
    this->diemLuanVan = diemLuanVan;
}
