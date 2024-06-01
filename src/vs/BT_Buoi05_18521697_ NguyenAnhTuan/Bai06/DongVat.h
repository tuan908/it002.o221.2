#pragma once

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::getline;
using std::string;
using std::vector;

class DongVat {
   protected:
    int soCon, soLitSua;

   public:
    DongVat(/* args */);

    void nhap() {
        cout << "Nhap so con: ";
        cin >> soCon;

        cout << "Nhap so lit sua: ";
        cin >> soLitSua;
    }

    void phatRaTiengKeu() {
    }

    void getThongTin() {
        cout << soCon << " " << soLitSua;
    }

    ~DongVat();
};

DongVat::DongVat(/* args */) {
}

DongVat::~DongVat() {
}
