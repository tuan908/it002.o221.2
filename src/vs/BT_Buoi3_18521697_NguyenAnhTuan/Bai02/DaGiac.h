#pragma once

#include "Diem.h"

class DaGiac {
   private:
    int n;
    Diem* points = new Diem[n];

   public:
    DaGiac(/* args */);
    ~DaGiac();

    void nhap();

    void xuat();

    void tinhTien();

    void quay();

    void phongTo();

    void thuNho();
};
