#pragma once

#include <iostream>

using std::cin;
using std::cout;
using std::istream;
using std::ostream;

class PhanSo {
   private:
    int tuSo, mauSo;

   public:
    PhanSo(/* args */);

    PhanSo(int x1, int x2) {
        this->tuSo = x1;
        this->mauSo = x2;
    }

    ~PhanSo();

    int getTuSo() { return this->tuSo; }

    void setTuSo(int value) { this->tuSo = value; }

    int getMauSo() { return this->mauSo; }

    void setMauSo(int value) { this->mauSo = value; }

    PhanSo cong(const PhanSo &other) {
        PhanSo ans;
        ans.tuSo = this->tuSo * other.mauSo + this->mauSo * other.tuSo;
        ans.mauSo = this->mauSo * other.mauSo;
        return ans;
    }

    PhanSo tru(const PhanSo &other) {
        PhanSo ans;
        ans.tuSo = this->tuSo * other.mauSo - this->mauSo * other.tuSo;
        ans.mauSo = this->mauSo * other.mauSo;
        return ans;
    }

    PhanSo nhan(const PhanSo &other) {
        PhanSo ans;
        ans.tuSo = this->tuSo * other.tuSo;
        ans.mauSo = this->mauSo * other.mauSo;
        return ans;
    }

    PhanSo chia(const PhanSo &other) {
        PhanSo ans;
        ans.tuSo = this->tuSo * other.mauSo;
        ans.mauSo = this->mauSo * other.tuSo;
        return ans;
    }

    friend ostream &operator<<(ostream &os, const PhanSo &p) {
        os << p.tuSo << "/" << p.mauSo;
        return os;
    }

    friend istream &operator>>(istream &is, PhanSo &p) {
        is >> p.tuSo >> p.mauSo;
        if (p.mauSo == 0) {
            exit(0);
        }
        return is;
    }
};

PhanSo::PhanSo(/* args */) {}

PhanSo::~PhanSo() {}
