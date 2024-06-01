#pragma once

#include <iostream>

using namespace std;

class PhanSo {
   private:
    double TuSo, MauSo;

   public:
    // Constructor/Destructor
    PhanSo();
    PhanSo(double);
    PhanSo(double, double);
    ~PhanSo();

    // Getters/Setters
    double getTuSo() const {
        return this->TuSo;
    }

    double getMauSo() const {
        return this->MauSo;
    }

    void setTuSo(double value) {
        this->TuSo = value;
    }

    void setMauSo(double value) {
        this->MauSo = value;
    }

    double getValue() {
        return this->TuSo / this->MauSo;
    }

    // Methods:
    void input();

    void display() const;

    PhanSo cong(PhanSo& ps) const;

    PhanSo tru(PhanSo& ps) const;

    PhanSo nhan(PhanSo& ps) const;

    PhanSo chia(PhanSo& ps) const;

    // Overloaded operators:
    friend ostream& operator<<(ostream& os, const PhanSo& ps) {
        os << ps.TuSo << "/" << ps.MauSo;
        return os;
    }

    friend istream& operator>>(istream& is, PhanSo& ps) {
        is >> ps.TuSo;
        if (ps.MauSo == 0) {
            is >> ps.MauSo;
        }
        return is;
    }

    PhanSo operator+(PhanSo& other) {
        PhanSo result;
        result.TuSo = this->TuSo * other.MauSo + this->MauSo * other.TuSo;
        result.MauSo = this->MauSo * other.MauSo;
        return result;
    }

    PhanSo operator-(PhanSo& other) {
        PhanSo result;
        result.TuSo = this->TuSo * other.MauSo - this->MauSo * other.TuSo;
        result.MauSo = this->MauSo * other.MauSo;
        return result;
    }

    PhanSo operator*(PhanSo& other) {
        PhanSo result;
        result.TuSo = this->TuSo * other.TuSo;
        result.MauSo = this->MauSo * other.MauSo;
        return result;
    }

    PhanSo operator/(PhanSo& other) {
        PhanSo result;
        result.TuSo = this->TuSo * other.MauSo;
        result.MauSo = this->MauSo * other.TuSo;
        return result;
    }

    bool operator==(PhanSo& other) {
        return this->getValue() == other.getValue();
    }

    bool operator>(PhanSo& other) {
        return this->getValue() > other.getValue();
    }

    bool operator<(PhanSo& other) {
        return this->getValue() < other.getValue();
    }
};

PhanSo::PhanSo() {
}

PhanSo::PhanSo(double value) {
    this->TuSo = value;
    this->MauSo = 1;
}

PhanSo::~PhanSo() {
}

PhanSo::PhanSo(double TuSo, double MauSo) {
    this->TuSo = TuSo;
    this->MauSo = MauSo;
}