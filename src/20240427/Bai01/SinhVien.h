#pragma once

#include <iostream>
#include <string>

using namespace std;

class SinhVien {
   protected:
    string mssv, hoTen, diaChi;
    int tongSoTinChi;
    float diemTB;

   public:
    SinhVien(/* args */);
    ~SinhVien();

    string getMssv() {
        return this->mssv;
    }

    void setMssv(string value) {
        this->mssv = value;
    }

    string getHoTen() {
        return this->hoTen;
    }

    void setHoTen(string value) {
        this->hoTen = value;
    }

    string getDiaChi() {
        return this->diaChi;
    }

    void setDiaChi(string value) {
        this->diaChi = value;
    }

    int getTongSoTinChi() {
        return this->tongSoTinChi;
    }

    void setTongSoTinChi(int value) {
        this->tongSoTinChi = value;
    }

    float getDiemTB() {
        return this->diemTB;
    }

    void setDiemTB(float value) {
        this->diemTB = value;
    }

    virtual void nhap();
    virtual void xuat();
    virtual bool xetTotNghiep();
};

SinhVien::SinhVien(/* args */) {
}

SinhVien::~SinhVien() {
}
