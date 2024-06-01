// Mã số sinh viên: 1852167
// Họ và tên: Nguyễn Anh Tuấn
// Ngày sinh: 10/10/2000
// Lớp: IT002.O221

#pragma once

#include <iostream>
#include <string>

using namespace std;

class SinhVienCaoDang {
   private:
    string mssv, hoTen, diaChi;
    int tongSoTinChi;
    float diemTB, diemThiTotNghiep;

   public:
    SinhVienCaoDang(/* args */);
    SinhVienCaoDang(string mssv, string hoTen, string diaChi, int tongSoTinChi, float diemTB,
                    float diemThiTotNghiep);
    ~SinhVienCaoDang();

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
        cin.ignore();
        getline(cin, this->mssv);
        getline(cin, this->hoTen);
        getline(cin, this->diaChi);

        cin >> this->tongSoTinChi >> this->diemTB >> this->diemThiTotNghiep;
    }

    void xuat() {
        cout << "Ma so sinh vien: " << this->mssv << "\n";
        cout << "Ho ten: " << this->hoTen << "\n";
        cout << "Dia chi: " << this->diaChi << "\n";
        cout << "Tong so tin chi: " << this->tongSoTinChi << "\n";
        cout << "Diem trung binh: " << this->diemTB << "\n";
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
