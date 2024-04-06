#pragma once

#include <iostream>

using std::cin;
using std::cout;
using std::ostream;

class DonThuc {
   private:
    /* data */
    int heSo, soMu;

   public:
    DonThuc(/* args */);
    DonThuc(int newHeSo, int newSoMu) {
        this->heSo = newHeSo;
        this->soMu = newSoMu;
    }
    ~DonThuc();

    int getHeSo() { return this->heSo; }

    void setHeSo(int value) { this->heSo = value; }

    int getSoMu() { return this->soMu; }

    void setSoMu(int value) { this->soMu = value; }

    void input() { cin >> this->heSo >> this->soMu; }

    void display() { cout << this->heSo << "x^" << this->soMu; }

    long long getValueByX(int &x) { return this->heSo * (x ^ this->soMu); }

    int tinhDaoHam();

    DonThuc operator+(const DonThuc &other) {
        if (this->getSoMu() != other.soMu) {
            exit(0);
        }
        DonThuc ans;
        ans.heSo = this->heSo + other.heSo;
        ans.soMu = this->soMu;
        return ans;
    }

    friend ostream &operator<<(ostream &os, const DonThuc &d) {
        os << d.heSo << "x^" << d.soMu << "\n";
        return os;
    }
};

DonThuc::DonThuc(/* args */) {}

DonThuc::~DonThuc() {}
