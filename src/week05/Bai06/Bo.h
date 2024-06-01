#pragma once

#include "DongVat.h"

class Bo : public DongVat {
   public:
    void phatRaTiengKeu() {
        cout << "Bo";
    }

    void getThongTin() {
        DongVat::getThongTin();
    }
};