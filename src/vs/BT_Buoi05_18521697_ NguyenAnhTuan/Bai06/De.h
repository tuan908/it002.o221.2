#pragma once

#include "DongVat.h"

class De : public DongVat {
   public:
    void phatRaTiengKeu() {
        cout << "De";
    }

    void getThongTin() {
        DongVat::getThongTin();
    }
};