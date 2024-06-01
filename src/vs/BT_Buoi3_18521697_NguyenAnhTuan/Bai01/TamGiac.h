#pragma once

#include "Diem.h"

class TamGiac {
   private:
    Diem a, b, c;

   public:
    TamGiac(/* args */);
    ~TamGiac();

    Diem getA() {
        return this->a;
    }

    Diem getB() {
        return this->b;
    }

    Diem getC() {
        return this->c;
    }

    void setA(Diem newA) {
        this->a = newA;
    }

    void setB(Diem newB) {
        this->b = newB;
    }

    void setC(Diem newC) {
        this->c = newC;
    }

    friend ostream& operator<<(ostream& os, const TamGiac& t) {
        os << t.a << " " << t.b << " " << t.c;
        return os;
    }

    friend istream& operator>>(istream& is, TamGiac& t) {
        is >> t.a >> t.b >> t.c;
        return is;
    }

    void tinhTien();

    void quay();

    void phongTo();

    void thuNho();
};
