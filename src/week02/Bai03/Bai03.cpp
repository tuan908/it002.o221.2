#include "Bai03.h"

int main() {
    SoPhuc sp1, sp2, tong, hieu, tich, thuong;

    sp1.input();
    sp2.input();

    tong = sp1.tong(sp2);
    tong.output();

    hieu = sp1.hieu(sp2);
    hieu.output();

    tich = sp1.tich(sp2);
    tich.output();

    thuong = sp1.thuong(sp2);
    thuong.output();

    return 0;
}