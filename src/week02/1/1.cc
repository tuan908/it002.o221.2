#include "week02/1/1.h"

int main() {
    PhanSo ps1, ps2;
    cout << "Nhap phan so 1: ";
    cin >> ps1;

    cout << "Nhap phan so 2: ";
    cin >> ps2;

    cout << "Tong: " << ps1.cong(ps2) << "\n";
    cout << "Hieu: " << ps1.tru(ps2) << "\n";
    cout << "Tich: " << ps1.nhan(ps2) << "\n";
    cout << "Thuong: " << ps1.chia(ps2) << "\n";

    return 0;
}
