#include <vector>

#include "SinhVienCaoDang.h"
#include "SinhVienDaiHoc.h"

using std::vector;

void nhap(vector<SinhVien*>& ds, int n) {
    for (int i = 0; i < n; i++) {
        int type;
        cout << "Nhap loai sinh vien (1 - Sinh Vien Cao Dang, 2 - Sinh Vien Dai Hoc): ";
        cin >> type;

        if (type == 1) {
            SinhVien* sv = new SinhVienCaoDang;
            sv->nhap();
            ds.push_back(sv);
        }

        if (type == 2) {
            SinhVien* sv = new SinhVienDaiHoc;
            sv->nhap();
            ds.push_back(sv);
        }
    }
}

void xuat(vector<SinhVien*> ds) {
    for (auto sv : ds) {
        sv->xuat();
        cout << "\n";
    }
}

void kiemTraDtb(vector<SinhVien*> ds, int type) {
    string typeName;
    if (type == 1) {
        typeName = "dai hoc";
    } else {
        typeName = "cao dang";
    }
    cout << "Sinh vien " + typeName + " nao co diem trung binh cao nhat : \n";
    vector<SinhVien*> dsdh;
    for (auto sv : ds) {
        if (sv->getType() == type) {
            dsdh.push_back(sv);
        }
    }

    if (dsdh.size() == 0) {
        cout << "Khong ton tai sinh vien dai hoc nao trong danh sach.";
    } else {
        float max = dsdh[0]->getDiemTb();
        int index = 0;
        for (int i = 1; i < dsdh.size(); i++) {
            if (max <= dsdh[i]->getDiemTb()) {
                index = i;
            }
        }
        dsdh[index]->xuat();
    }
    cout << "\n";
}

void xetTotNghiepMoiLoai(vector<SinhVien*>& ds) {
    vector<SinhVien*> ans1;
    vector<SinhVien*> ans2;

    for (auto sv : ans1) {
        if (sv->getType() == 1 && !sv->xetTotNghiep()) {
            ans1.push_back(sv);
        }

        if (sv->getType() == 2 && !sv->xetTotNghiep()) {
            ans2.push_back(sv);
        }
    }

    cout << "Danh sach sinh vien cao dang tot nghiep: \n";
    for (auto svdh : ans1) {
        svdh->xuat();
        cout << "\n";
    }
    cout << "\n";
    
    cout << "Danh sach sinh vien dai hoc tot nghiep: \n";
    for (auto svdh : ans1) {
        svdh->xuat();
        cout << "\n";
    }
    cout << "\n";
}

int main() {
    vector<SinhVien*> ds;
    int n;

    //	a.Nhập vào danh sách các sinh viên
    cout << "Nhap vao so luong sinh vien: ";
    cin >> n;
    nhap(ds, n);

    //	b.Xuất danh sách các sinh viên
    xuat(ds);

    //	c.Xuất danh sách sinh viên đủ điều kiện tốt nghiệp
    cout << "Danh sach sinh vien du dieu kien tot nghiep: \n";
    for (auto sv : ds) {
        if (sv->xetTotNghiep()) {
            sv->xuat();
            cout << "\n";
        }
    }

    cout << "\n";

    //	d.Xuất danh sách sinh viên không đủ điều kiện tốt nghiệp
    cout << "Danh sach sinh vien khong du dieu kien tot nghiep: \n";
    for (auto sv : ds) {
        if (!sv->xetTotNghiep()) {
            sv->xuat();
            cout << "\n";
        }
    }
    cout << "\n";

    //	e.Cho biết sinh viên đại học nào có điểm trung bình cao nhất
    kiemTraDtb(ds, 1);

    //	f.Cho biết sinh viên cao đẳng nào có điểm trung bình cao nhất
    kiemTraDtb(ds, 2);

    //  g.Với mỗi loại, cho biết có bao nhiêu sinh viên không đủ điều kiện tốt nghiệp
    xetTotNghiepMoiLoai(ds);
}