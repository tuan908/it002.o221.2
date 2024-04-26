#include "TamGiac.h"

int main() {
    TamGiac t;

    cin >> t;
    cout << "Tam giac tao boi 3 diem: ";
    cout << t << "\n";

    t.tinhTien();
    cout << "\n";

    t.quay();
    cout << "\n";

    t.phongTo();
    cout << "\n";

    t.thuNho();
    cout << "\n";

    return 0;
}