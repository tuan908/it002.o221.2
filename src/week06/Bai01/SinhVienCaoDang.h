#pragma once

#include "SinhVien.h"

class SinhVienCaoDang : public SinhVien {
   private:
    double diemThiTotNghiep;

   public:
    SinhVienCaoDang(/* args */);

    void nhap() {
        SinhVien::nhap();

        cout << "Nhap diem thi tot nghiep: ";
        cin >> diemThiTotNghiep;
    }

    void xuat() {
        SinhVien::xuat();
        cout << diemThiTotNghiep << "\n";
    }

    bool xetTotNghiep() override {
        if (this->getTongSoTinChi() >= 110 && this->getDiemTrungBinh() >= 5.0 &&
            this->diemThiTotNghiep >= 5) {
            return true;
        } else {
            return false;
        }
    }

    int getType() override {
        return 0;
    }

    ~SinhVienCaoDang();
};

SinhVienCaoDang::SinhVienCaoDang(/* args */) {
}

SinhVienCaoDang::~SinhVienCaoDang() {
}
