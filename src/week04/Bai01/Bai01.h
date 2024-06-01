#pragma once

#include <iostream>

using namespace std;

class SoPhuc {
   private:
    double thuc, ao;

   public:
    // Constructors/Destructor
    SoPhuc();

    SoPhuc(double);

    SoPhuc(double, double);

    SoPhuc(const SoPhuc& p);

    ~SoPhuc();

    // Getters/Setters:
    double getThuc() {
    }

    double getAo() {
    }

    void setThuc() {
    }

    void setAo() {
    }

    // Methods
    SoPhuc tong(const SoPhuc& sp) const;
    SoPhuc hieu(const SoPhuc& sp) const;
    SoPhuc tich(const SoPhuc& sp) const;
    SoPhuc thuong(const SoPhuc& sp) const;

    // Overloaded operators:
    friend ostream& operator<<(ostream& os, const SoPhuc& p) {
        os << p.thuc << " + " << p.ao << "i";
        return os;
    }

    friend istream& operator>>(istream& is, SoPhuc& s) {
        is >> s.thuc >> s.ao;
        return is;
    }

    SoPhuc operator+(SoPhuc& other) {
        SoPhuc result;
        result.thuc = this->thuc + other.thuc;
        result.ao = this->ao + other.ao;
        return result;
    }

    SoPhuc operator-(SoPhuc& other) {
        SoPhuc result;
        result.thuc = this->thuc - other.thuc;
        result.ao = this->ao - other.ao;
        return result;
    }

    SoPhuc operator*(SoPhuc& other) {
        SoPhuc result;
        result.thuc = (this->thuc * other.thuc) - (this->ao * other.ao);
        result.ao = (this->thuc * other.ao) + (this->ao * other.thuc);
        return result;
    }

    SoPhuc operator/(SoPhuc& other) {
        SoPhuc result;
        auto x = (other.thuc * other.thuc) + (other.ao * other.ao);
        result.thuc = ((this->thuc * other.thuc) + (this->ao * other.ao)) / x;
        result.ao = ((other.thuc * this->ao) - (this->thuc * other.ao)) / x;

        return result;
    }

    SoPhuc operator==(SoPhuc& other) {
        return this->ao == other.ao && this->thuc == other.thuc;
    }

    SoPhuc operator!=(SoPhuc& other) {
        return this->ao != other.thuc && this->thuc != other.thuc;
    }
};

SoPhuc::SoPhuc() {
}

SoPhuc::SoPhuc(double thuc) {
    this->thuc = thuc;
    this->ao = 0;
}

SoPhuc::SoPhuc(double x, double y) {
    this->thuc = x;
    this->ao = y;
}

SoPhuc::SoPhuc(const SoPhuc& p) {
    this->thuc = p.thuc;
    this->ao = p.ao;
}

SoPhuc::~SoPhuc() {
}