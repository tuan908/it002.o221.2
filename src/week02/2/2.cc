#include "week02/2/2.h"

int main() {
    Diem d1;
    cout << "Nhap toa do x, y: ";
    cin >> d1;
    cout << "Toa do: " << d1 << "\n";

    float x, y;
    cout << "Nhap toa do x, y moi: ";
    cin >> x >> y;
    cout << "Toa do moi: " << d1.tinhTien(x, y);

    return 0;
}
