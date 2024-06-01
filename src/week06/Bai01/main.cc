#include "SinhVienCaoDang.h"
#include "SinhVienDaiHoc.h"

int main() {
    vector<SinhVien*> students;

    // a. Nhập vào danh sách các sinh viên
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int type;
        cout << "Nhap loai sinh vien: ";
        cin >> type;

        if (type == 0) {
            SinhVien* sv = new SinhVienCaoDang;
            sv->nhap();
            students.push_back(sv);
        }

        if (type == 1) {
            SinhVien* sv = new SinhVienDaiHoc;
            sv->nhap();
            students.push_back(sv);
        }
    }

    // b. Xuất danh sách các sinh viên
    for (auto s : students) {
        s->xuat();
    }
    cout << "\n";

    // c. Xuất danh sách sinh viên đủ điều kiện tốt nghiệp
    cout << "Danh sach sinh vien du dieu kien tot nghiep: \n";
    for (auto s : students) {
        if (s->xetTotNghiep()) {
            s->xuat();
        }
    }
    cout << "\n";

    // d. Xuất danh sách sinh viên không đủ điều kiện tốt nghiệp
    cout << "Danh sach sinh vien du dieu kien tot nghiep: \n";
    for (auto s : students) {
        if (!s->xetTotNghiep()) {
            s->xuat();
        }
    }
    cout << "\n";

    // e. Cho biết sinh viên đại học nào có điểm trung bình cao nhất
    if (students.size() > 0) {
        vector<SinhVien*> dsMax;
        double max = students[0]->getDiemTrungBinh();

        for (int i = 0; i < n; i++) {
            if (max >= students[i]->getDiemTrungBinh() && students[i]->getType() == 1) {
                dsMax.push_back(students[i]);
            }
        }

        for (auto s : dsMax) {
            s->xuat();
        }
    } else {
        cout << "Danh sach khong ton tai";
    }
    // f. Cho biết sinh viên cao đẳng nào có điểm trung bình cao nhất
    if (students.size() > 0) {
        vector<SinhVien*> dsMax;
        double max = students[0]->getDiemTrungBinh();

        for (int i = 0; i < n; i++) {
            if (max >= students[i]->getDiemTrungBinh() && students[i]->getType() == 0) {
                dsMax.push_back(students[i]);
            }
        }

        for (auto s : dsMax) {
            s->xuat();
        }
    } else {
        cout << "Danh sach khong ton tai";
    }

    // g. Với mỗi loại, cho biết có bao nhiêu sinh viên không đủ điều kiện tốt nghiệp
    if (students.size() > 0) {
        int sl1 = 0, sl2 = 0;

        for (int i = 0; i < n; i++) {
            if (students[i]->xetTotNghiep()) {
                if (students[i]->getType() == 0) {
                    sl1 += 1;
                }

                if (students[i]->getType() == 1) {
                    sl2 += 1;
                }
            }
        }

        cout << "So luong sinh vien cao dang khong du dieu kien tot nghiep: " << sl1 << "\n";
        cout << "So luong sinh vien dai hoc khong du dieu kien tot nghiep: " << sl2;

    } else {
        cout << "Danh sach khong ton tai";
    }
    return 0;
}