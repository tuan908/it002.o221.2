#include "DSPhanSo.h"

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    DSPhanSo ds;

    ds.nhap();
    ds.xuat();
    ds.tong();
    ds.timLonNhat();
    ds.timNhoNhat();
    ds.sapXepTangDan();
    ds.sapXepGiamDan();

    return 0;
}