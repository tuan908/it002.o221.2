#pragma once

#include <cmath>
#include <iostream>

using std::cin;
using std::cout;
using std::istream;
using std::ostream;

class Diem {
   private:
    double x, y;

   public:
    Diem(/* args */);

    Diem(double, double);

    double getX() {
        return this->x;
    }

    double getY() {
        return this->y;
    }

    void setX(double newX) {
        this->x = newX;
    }

    void setY(double newY) {
        this->y = newY;
    }

    friend ostream& operator<<(ostream& os, const Diem& d) {
        os << d.x << " " << d.y;
        return os;
    }

    friend istream& operator>>(istream& is, Diem& d) {
        is >> d.x >> d.y;
        return is;
    }

    void tinhTien(double, double);

    void quay(double);

    ~Diem();
};