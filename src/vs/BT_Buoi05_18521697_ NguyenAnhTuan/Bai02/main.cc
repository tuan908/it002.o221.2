#include <vector>

#include "SinhVienCaoDang.h"
#include "SinhVienDaiHoc.h"

using std::vector;

int main() {
    vector<SinhVienCaoDang> ds1;
    vector<SinhVienDaiHoc> ds2;

    // a. Nhập vào danh sách các sinh viên đại học, danh sách sinh viên cao đẳng
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    for (size_t i = 0; i < n; i++) {
        int type;
        cout << "Nhap loai sinh vien (Sinh vien cao dang - 0, Sinh vien dai hoc: 1): ";
        cin >> type;

        if (type == 0) {
            SinhVienCaoDang sv = SinhVienCaoDang();
            sv.nhap();
            ds1.push_back(sv);
        }

        if (type == 1) {
            SinhVienDaiHoc sv = SinhVienDaiHoc();
            sv.nhap();
            ds2.push_back(sv);
        }
    }

    // b. Xuất danh sách các sinh viên
    cout << "Danh sach cac sinh vien: \n";
    for (auto sv : ds1) {
        sv.xuat();
        cout << "\n";
    }

    for (auto sv : ds2) {
        sv.xuat();
        cout << "\n";
    }
    cout << "\n";

    // c. Xuất danh sách các sinh viên đủ điều kiện tốt nghiệp
    cout << "Danh sach sinh vien du dieu kien tot nghiep: \n";
    for (auto sv : ds1) {
        if (sv.xetTotNghiep()) {
            sv.xuat();
        }
    }

    for (auto sv : ds2) {
        if (sv.xetTotNghiep()) {
            sv.xuat();
        }
    }

    cout << "\n";

    // d. Xuất danh sách các sinh viên không đủ điều kiện tốt nghiệp
    cout << "Danh sach sinh vien khong du dieu kien tot nghiep: \n";
    for (auto sv : ds1) {
        if (!sv.xetTotNghiep()) {
            sv.xuat();
        }
    }

    for (auto sv : ds2) {
        if (!sv.xetTotNghiep()) {
            sv.xuat();
        }
    }

    cout << "\n";

    // e. Cho biết sinh viên đại học nào có điểm trung bình cao nhất
    if (ds2.size() > 0) {
        SinhVienDaiHoc max = ds2[0];
        for (int i = 1; i < ds2.size(); i++) {
            if (max.getDiemTrungBinh() > ds2[i].getDiemTrungBinh()) {
                max = ds2[i];
            }
        }
        cout << "Sinh vien dai hoc co diem trung binh cao nhat: ";
        max.xuat();
    } else {
        cout << "Khong ton tai sinh vien dai hoc trong danh sach.";
    }

    return 0;
}
