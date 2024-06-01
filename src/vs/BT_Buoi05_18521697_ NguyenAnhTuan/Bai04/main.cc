#include "CaSi.h"
#include "HocSinh.h"
#include "NgheSi.h"
#include "SinhVien.h"

int main() {
    vector<SinhVien> dsSinhVien;
    vector<HocSinh> dsHocSinh;
    vector<CaSi> dsCaSi;
    vector<NgheSi> dsNgheSi;

    // 1. Nhập danh sách đối tượng:
    int n;
    cout << "Nhap so luong phan tu cua danh sach: ";
    cin >> n;

    for (size_t i = 0; i < n; i++) {
        int type;
        cout << "Nhap kieu doi tuong (0 - Sinh Vien, 1 - Hoc Sinh, 2 - Nghe Si, 3 - Ca Si): ";
        cin >> type;

        switch (type) {
            case 0: {
                SinhVien sv = SinhVien();
                sv.nhap();
                dsSinhVien.push_back(sv);
                break;
            }
            case 1: {
                HocSinh hs = HocSinh();
                hs.nhap();
                dsHocSinh.push_back(hs);
                break;
            }
            case 2: {
                NgheSi ns = NgheSi();
                ns.nhap();
                dsNgheSi.push_back(ns);
                break;
            }
            case 3: {
                CaSi cs = CaSi();
                cs.nhap();
                dsCaSi.push_back(cs);
                break;
            }

            default:
                break;
        }
    }

    // 2. Xuất thông tin danh sách đối tượng
    for (auto element : dsSinhVien) {
        element.xuat();
        cout << "\n";
    }

    for (auto element : dsHocSinh) {
        element.xuat();
        cout << "\n";
    }

    for (auto element : dsNgheSi) {
        element.xuat();
        cout << "\n";
    }

    for (auto element : dsCaSi) {
        element.xuat();
    }

    return 0;
}