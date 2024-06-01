#pragma once

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
    PhanSo(double x) {
        this->TuSo = x;
        this->MauSo = 1;
    }
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

    // Methods:
    void input();

    void display() const;

    PhanSo cong(PhanSo& ps) const;

    PhanSo tru(PhanSo& ps) const;

    PhanSo nhan(PhanSo& ps) const;

    PhanSo chia(PhanSo& ps) const;

    // Overloaded operators:
    friend ostream& operator<<(ostream& os, const PhanSo& ps) {
        if (ps.MauSo == 1) {
            os << ps.TuSo;
        } else if (ps.MauSo < 0) {
            os << ps.TuSo * -1 << "/" << ps.MauSo * -1;
        } else {
            os << ps.TuSo << "/" << ps.MauSo;
        }
        return os;
    }

    friend istream& operator>>(istream& is, PhanSo& ps) {
        is >> ps.TuSo >> ps.MauSo;
        return is;
    }

    bool operator<(PhanSo& other) {
        return this->getValue() < other.getValue();
    }

    bool operator>=(PhanSo& other) {
        return this->getValue() >= other.getValue();
    }

    int gcd(int x, int y) {
        if (y == 0) {
            return x;
        } else {
            return gcd(y, x % y);
        }
    }

    PhanSo rutGon() {
        double tuSo = this->TuSo;
        double mauSo = this->MauSo;
        double ucln = gcd(this->TuSo, this->MauSo);
        PhanSo ans = PhanSo(this->TuSo / ucln, this->MauSo / ucln);
        return ans;
    }

    double getValue() {
        return this->getTuSo() / this->getMauSo();
    };
};

PhanSo::PhanSo() {
}

PhanSo::~PhanSo() {
}

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

void PhanSo::display() const {
    cout << this->TuSo << "/" << this->MauSo;
}

PhanSo PhanSo::cong(PhanSo& ps) const {
    PhanSo result;
    result.TuSo = this->TuSo * ps.MauSo + this->MauSo * ps.TuSo;
    result.MauSo = this->MauSo * ps.MauSo;
    return result;
}

PhanSo PhanSo::tru(PhanSo& ps) const {
    PhanSo result;
    result.TuSo = this->TuSo * ps.MauSo - this->MauSo * ps.TuSo;
    result.MauSo = this->MauSo * ps.MauSo;
    return result;
}

PhanSo PhanSo::nhan(PhanSo& ps) const {
    PhanSo result;
    result.TuSo = this->TuSo * ps.TuSo;
    result.MauSo = this->MauSo * ps.MauSo;
    return result;
}

PhanSo PhanSo::chia(PhanSo& ps) const {
    PhanSo result;
    result.TuSo = this->TuSo * ps.MauSo;
    result.MauSo = this->MauSo * ps.TuSo;
    return result;
}