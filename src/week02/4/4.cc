#include "week02/4/4.h"

int main() {
    Time t;

    cin >> t;

    // int x;
    // cout << "Nhap so gio muon them: ";
    // cin >> x;
    // cout << t.addHour(x) << "\n";

    // int y;
    // cout << "Nhap so phut muon them: ";
    // cin >> y;
    // cout << t.addMin(y) << "\n";

    int z;
    // cout << "Nhap so giay muon them: ";
    cin >> z;
    cout << t.addSec(z) << "\n";

    return 0;
}
