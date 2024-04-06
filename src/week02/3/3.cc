#include "week02/3/3.h"

int main() {
    SoPhuc s1, s2;
    cout << "Nhap so thu nhat: ";
    cin >> s1;

    cout << "Nhap so thu hai: ";
    cin >> s2;

    cout << "Tong: " << s1.cong(s2) << "\n";
    cout << "Hieu: " << s1.tru(s2) << "\n";
    cout << "Tich: " << s1.nhan(s2) << "\n";
    cout << "Thuong: " << s1.chia(s2) << "\n";

    return 0;
}
