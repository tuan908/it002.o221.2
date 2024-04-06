#pragma once

#include <iostream>

using namespace std;

class PhanSo {
   private:
    double TuSo, MauSo;

   public:
    // Constructor/Destructor
    PhanSo();
    PhanSo(double, double);
    ~PhanSo();

    // Getters/Setters
    double getTuSo() const { return this->TuSo; }

    double getMauSo() const { return this->MauSo; }

    void setTuSo(double value) { this->TuSo = value; }

    void setMauSo(double value) { this->MauSo = value; }

    // Methods:
    void input();

    void display() const;

    PhanSo cong(PhanSo &ps) const;

    PhanSo tru(PhanSo &ps) const;

    PhanSo nhan(PhanSo &ps) const;

    PhanSo chia(PhanSo &ps) const;

    // Overloaded operators:
    friend ostream &operator<<(ostream &os, const PhanSo &ps) {
        os << ps.TuSo << "/" << ps.MauSo;
        return os;
    }
};

PhanSo::PhanSo() {}

PhanSo::~PhanSo() {}

PhanSo::PhanSo(double TuSo, double MauSo) {
    this->TuSo = TuSo;
    this->MauSo = MauSo;
}

void PhanSo::input() {
    cout << "Nhap tu so: ";
    cin >> this->TuSo;

    cout << "Nhap mau so: ";
    cin >> this->MauSo;
    if (this->MauSo == 0) {
        return;
    }
}

void PhanSo::display() const { cout << this->TuSo << "/" << this->MauSo; }

PhanSo PhanSo::cong(PhanSo &ps) const {
    PhanSo result;
    result.TuSo = this->TuSo * ps.MauSo + this->MauSo * ps.TuSo;
    result.MauSo = this->MauSo * ps.MauSo;
    return result;
}

PhanSo PhanSo::tru(PhanSo &ps) const {
    PhanSo result;
    result.TuSo = this->TuSo * ps.MauSo - this->MauSo * ps.TuSo;
    result.MauSo = this->MauSo * ps.MauSo;
    return result;
}

PhanSo PhanSo::nhan(PhanSo &ps) const {
    PhanSo result;
    result.TuSo = this->TuSo * ps.TuSo;
    result.MauSo = this->MauSo * ps.MauSo;
    return result;
}

PhanSo PhanSo::chia(PhanSo &ps) const {
    PhanSo result;
    result.TuSo = this->TuSo * ps.MauSo;
    result.MauSo = this->MauSo * ps.TuSo;
    return result;
}