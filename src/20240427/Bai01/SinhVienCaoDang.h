// Mã số sinh viên: 1852167
// Họ và tên: Nguyễn Anh Tuấn
// Ngày sinh: 10/10/2000
// Lớp: IT002.O221

#pragma once

#include <iostream>
#include <string>

#include "SinhVien.h"

using namespace std;

class SinhVienCaoDang : public SinhVien {
   private:
    float diemThiTotNghiep;

   public:
    SinhVienCaoDang(/* args */);
    SinhVienCaoDang(string mssv, string hoTen, string diaChi, int tongSoTinChi, float diemTB,
                    float diemThiTotNghiep);
    ~SinhVienCaoDang();

    float getDiemThiTotNghiep() {
        return this->diemThiTotNghiep;
    }

    void setDiemThiTotNghiep(float value) {
        this->diemThiTotNghiep = value;
    }

    bool xetTotNghiep() const {
        return tongSoTinChi >= 110 && diemTB >= 5 && diemThiTotNghiep >= 5;
    }

    void nhap() {
        SinhVien::nhap();
        cin >> this->diemThiTotNghiep;
    }

    void xuat() {
        SinhVien::xuat();
        cout << "Diem thi tot nghiep: " << this->diemThiTotNghiep << "\n";
    }
};

SinhVienCaoDang::SinhVienCaoDang(/* args */) {
}

SinhVienCaoDang::~SinhVienCaoDang() {
}

SinhVienCaoDang::SinhVienCaoDang(string mssv, string hoTen, string diaChi, int tongSoTinChi,
                                 float diemTB, float diemThiTotNghiep) {
    this->mssv = mssv;
    this->hoTen = hoTen;
    this->diaChi = diaChi;
    this->tongSoTinChi = tongSoTinChi;
    this->diemTB = diemTB;
    this->diemThiTotNghiep = diemThiTotNghiep;
}
