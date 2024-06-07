#pragma once
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::string;
using std::getline;

class DongVat {
   protected:
    int soCon;
    float soLitSua;

   public:
    DongVat() {
    }
    ~DongVat() {
    }

    void nhap() {
        cout << "Nhap so con: ";
        cin >> soCon;

        cout << "Nhap so lit sua: ";
        cin >> soLitSua;
    }

    void xuat() {
        cout << soCon << " " << soLitSua << "\n";
    }

    virtual void keu() = 0;
};