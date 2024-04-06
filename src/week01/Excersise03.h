#pragma once

#include <iostream>

using namespace std;

class SoPhuc {
   private:
    double thuc, ao;

   public:
    // Constructors/Destructor
    SoPhuc();

    SoPhuc(double, double);

    SoPhuc(const SoPhuc& p);

    ~SoPhuc();

    // Getters/Setters:
    double getThuc() {}

    double getAo() {}

    void setThuc() {}

    void setAo() {}

    // Methods
    void input();

    void output() const;

    SoPhuc tong(const SoPhuc& sp) const;
    SoPhuc hieu(const SoPhuc& sp) const;
    SoPhuc tich(const SoPhuc& sp) const;
    SoPhuc thuong(const SoPhuc& sp) const;

    // Overloaded operators:
    friend ostream& operator<<(ostream& os, const SoPhuc& p) {
        os << p.thuc << " " << p.ao << endl;
        return os;
    }
};

SoPhuc::SoPhuc() {}

SoPhuc::SoPhuc(double x, double y) {
    this->thuc = x;
    this->ao = y;
}

SoPhuc::SoPhuc(const SoPhuc& p) {
    this->thuc = p.thuc;
    this->ao = p.ao;
}

SoPhuc::~SoPhuc() {}

void SoPhuc::input() {
    cout << "Nhap phan thuc: ";
    cin >> this->thuc;

    cout << "Nhap phan ao: ";
    cin >> this->ao;
}

void SoPhuc::output() const {
    cout << this->thuc << " + " << this->ao << "i" << endl;
}

SoPhuc SoPhuc::tong(const SoPhuc& sp) const {
    SoPhuc result;
    result.thuc = this->thuc + sp.thuc;
    result.ao = this->ao + sp.ao;
    return result;
}

SoPhuc SoPhuc::hieu(const SoPhuc& sp) const {
    SoPhuc result;
    result.thuc = this->thuc - sp.thuc;
    result.ao = this->ao - sp.ao;
    return result;
}

SoPhuc SoPhuc::tich(const SoPhuc& sp) const {
    SoPhuc result;
    result.thuc = (this->thuc * sp.thuc) - (this->ao * sp.ao);
    result.ao = (this->thuc * sp.ao) + (this->ao * sp.thuc);
    return result;
}

SoPhuc SoPhuc::thuong(const SoPhuc& sp) const {
    SoPhuc result;
    auto x = (sp.thuc * sp.thuc) + (sp.ao * sp.ao);
    result.thuc = ((this->thuc * sp.thuc) + (this->ao * sp.ao)) / x;
    result.ao = ((sp.thuc * this->ao) - (this->thuc * sp.ao)) / x;

    return result;
}
