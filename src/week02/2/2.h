#pragma once

#include <iostream>

using std::cin;
using std::cout;
using std::istream;
using std::ostream;

class Diem {
   private:
    float x, y;

   public:
    Diem(/* args */);

    Diem(float x1, float y1) {
        this->x = x1;
        this->y = y1;
    }

    ~Diem();

    float getX() { return this->x; }

    void setX(float value) { this->x = value; }

    float getY() { return this->y; }

    void setY(float value) { this->y = value; }

    Diem tinhTien(float newX, float newY) {
        Diem ans;
        ans.x = this->x + newX;
        ans.y = this->y + newY;
        return ans;
    }

    friend ostream &operator<<(ostream &os, const Diem &p) {
        os << p.x << "," << p.y;
        return os;
    }

    friend istream &operator>>(istream &is, Diem &p) {
        is >> p.x >> p.y;
        return is;
    }
};

Diem::Diem(/* args */) {}

Diem::~Diem() {}
