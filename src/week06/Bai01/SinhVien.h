#pragma once

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::getline;
using std::string;
using std::vector;

class SinhVien {
   protected:
    string mssv, hoTen, diaChi;
    int tongSoTinChi;
    double diemTrungBinh;

   public:
    SinhVien(/* args */);

    int getTongSoTinChi() {
        return this->tongSoTinChi;
    }

    double getDiemTrungBinh() {
        return this->diemTrungBinh;
    }

    virtual void nhap() {
        cin.ignore();

        cout << "Nhap ma so sinh vien: ";
        getline(cin, mssv);

        cout << "Nhap ho ten: ";
        getline(cin, hoTen);

        cout << "Nhap dia chi: ";
        getline(cin, diaChi);

        cout << "Nhap tong so tin chi: ";
        cin >> tongSoTinChi;

        cout << "Nhap diem trung binh: ";
        cin >> diemTrungBinh;
    }

    virtual void xuat() {
        cout << mssv << " " << hoTen << " " << diaChi << " " << tongSoTinChi << " " << diemTrungBinh
             << " ";
    }

    virtual bool xetTotNghiep() = 0;

    virtual int getType() = 0;

    ~SinhVien();
};

SinhVien::SinhVien(/* args */) {
}

SinhVien::~SinhVien() {
}
