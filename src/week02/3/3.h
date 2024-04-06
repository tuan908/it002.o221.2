#pragma once

#include <iostream>

using std::cin;
using std::cout;
using std::istream;
using std::ostream;

class SoPhuc {
   private:
    float thuc, ao;

   public:
    SoPhuc(/* args */);

    SoPhuc(float x1, float y1) {
        this->thuc = x1;
        this->ao = y1;
    }

    ~SoPhuc();

    float getThuc() { return this->thuc; }

    void setThuc(float value) { this->thuc = value; }

    float getAo() { return this->ao; }

    void setAo(float value) { this->ao = value; }

    SoPhuc cong(const SoPhuc &other) {
        SoPhuc ans;
        ans.thuc = this->thuc + other.thuc;
        ans.ao = this->ao + other.ao;
        return ans;
    }

    SoPhuc tru(const SoPhuc &other) {
        SoPhuc ans;
        ans.thuc = this->thuc - other.thuc;
        ans.ao = this->ao * other.ao;
        return ans;
    }

    SoPhuc nhan(const SoPhuc &other) {
        SoPhuc ans;
        ans.thuc = this->thuc * other.thuc - this->ao * other.ao;
        ans.ao = this->thuc * other.ao + this->ao * other.thuc;
        return ans;
    }

    SoPhuc chia(const SoPhuc &other) {
        SoPhuc ans;
        auto t1 = this->thuc * other.thuc + this->ao * other.ao;
        auto t2 = other.thuc * other.thuc + other.ao * other.ao;
        auto t3 = this->ao * other.thuc - this->thuc * other.ao;
        ans.thuc = t1 / t2;
        ans.ao = t3 / t2;
        return ans;
    }

    friend ostream &operator<<(ostream &os, const SoPhuc &p) {
        os << p.thuc << " + " << p.ao << "i";
        return os;
    }

    friend istream &operator>>(istream &is, SoPhuc &p) {
        is >> p.thuc >> p.ao;
        return is;
    }
};

SoPhuc::SoPhuc(/* args */) {}

SoPhuc::~SoPhuc() {}
