#include "CaSi.h"
#include "HocSinh.h"
#include "NgheSi.h"
#include "SinhVien.h"

int main() {
    int type;
    cout << "Nhap kieu doi tuong (0 - Sinh Vien, 1 - Hoc Sinh, 2 - Nghe Si, 3 - Ca Si): ";
    cin >> type;

    switch (type) {
        case 0: {
            SinhVien sv = SinhVien();
            sv.nhap();
            sv.xuat();
            break;
        }
        case 1: {
            HocSinh hs = HocSinh();
            hs.nhap();
            hs.xuat();
            break;
        }
        case 2: {
            NgheSi ns = NgheSi();
            ns.nhap();
            ns.xuat();
            break;
        }
        case 3: {
            CaSi sv = CaSi();
            sv.nhap();
            sv.xuat();
            break;
        }

        default:
            break;
    }

    return 0;
}