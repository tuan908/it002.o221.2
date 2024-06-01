#pragma once

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::getline;
using std::string;

class SinhVien {
   public:
    SinhVien() {
    }
    ~SinhVien() {
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
        cin >> diemTb;
    }

    virtual void xuat() {
        cout << mssv << " " << hoTen << " " << diaChi << " " << tongSoTinChi << " " << diemTb
             << " ";
    }

    virtual bool xetTotNghiep() = 0;

    virtual int getType() = 0;

    virtual float getDiemTb() {
        return diemTb;
    }

   protected:
    string mssv, hoTen, diaChi;
    int tongSoTinChi;
    float diemTb;
};