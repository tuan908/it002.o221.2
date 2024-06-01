// Mã số sinh viên: 1852167
// Họ và tên: Nguyễn Anh Tuấn
// Ngày sinh: 10/10/2000
// Lớp: IT002.O221

#pragma once

#include <iostream>
#include <string>

using namespace std;

class SinhVienDaiHoc {
   private:
    string mssv, hoTen, diaChi, tenLuanVan;
    int tongSoTinChi;
    float diemTB, diemLuanVan;

   public:
    SinhVienDaiHoc(/* args */);
    SinhVienDaiHoc(string mssv, string hoTen, string diaChi, int tongSoTinChi, float diemTB,
                   string tenLuanVan, float diemLuanVan);
    ~SinhVienDaiHoc();

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
        cin.ignore();
        getline(cin, this->mssv);
        getline(cin, this->hoTen);
        getline(cin, this->diaChi);

        cin >> this->diemTB;
        cin.ignore();
        getline(cin, this->tenLuanVan);
        cin >> this->diemLuanVan;
    }

    void xuat() {
        cout << "Ma so sinh vien: " << this->mssv << "\n";
        cout << "Ho ten: " << this->hoTen << "\n";
        cout << "Dia chi: " << this->diaChi << "\n";
        cout << "Tong so tin chi: " << this->tongSoTinChi << "\n";
        cout << "Diem trung binh: " << this->diemTB << "\n";
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
