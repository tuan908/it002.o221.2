#include "SinhVien.h"

void SinhVien::nhap() {
    cin.ignore();
    getline(cin, this->mssv);
    getline(cin, this->hoTen);
    getline(cin, this->diaChi);
}

void SinhVien::xuat() {
    cout << "Ma so sinh vien: " << this->mssv << "\n";
    cout << "Ho ten: " << this->hoTen << "\n";
    cout << "Dia chi: " << this->diaChi << "\n";
    cout << "Tong so tin chi: " << this->tongSoTinChi << "\n";
    cout << "Diem trung binh: " << this->diemTB << "\n";
}

bool SinhVien::xetTotNghiep() {
    return false;
}