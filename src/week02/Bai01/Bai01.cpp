#include "Bai01.h"

int main() {
    PhanSo ps1, ps2, tong, hieu, tich, thuong;
    ps1.input();
    ps2.input();
    tong = ps1.cong(ps2);
    hieu = ps1.tru(ps2);
    tich = ps1.nhan(ps2);
    thuong = ps1.chia(ps2);

    cout << "Tong 2 phan so: " << tong << endl;
    cout << "Hieu 2 phan so: " << hieu << endl;
    cout << "Tich 2 phan so: " << tich << endl;
    cout << "Thuong 2 phan so: " << thuong << endl;
    return 0;
}