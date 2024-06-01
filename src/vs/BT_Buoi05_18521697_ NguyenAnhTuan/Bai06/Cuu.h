#pragma once

#include "DongVat.h"

class Cuu : public DongVat {
   public:
    void phatRaTiengKeu() {
        cout << "Cuu";
    }

    void getThongTin() {
        DongVat::getThongTin();
    }
};