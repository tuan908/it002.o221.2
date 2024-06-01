// Mã số sinh viên: 1852167
// Họ và tên: Nguyễn Anh Tuấn
// Ngày sinh: 10/10/2000
// Lớp: IT002.O221

#include <vector>

#include "SinhVienCaoDang.h"
#include "SinhVienDaiHoc.h"

using std::cin;
using std::cout;
using std::vector;

class QuanLySinhVien {
   private:
    vector<SinhVienCaoDang> danhSachSV;

    vector<SinhVienDaiHoc> danhSachSinhVienDaiHoc;

   public:
    QuanLySinhVien(/* args */);
    ~QuanLySinhVien();

    // 1. Nhập vào danh sách sinh viên (gồm sinh viên cao đẳng và sinh viên đại học)
    void nhap();

    // 2. Xuất danh sách sinh viên (gồm sinh viên cao đẳng và sinh viên đại học)
    void xuat();

    // 3. Cho biết có bao nhiêu sinh viên đủ điều kiện tốt nghiệp?
    void tinhSoLuongSinhVienCoTheTotNghiep();

    // 4. Cho biết sinh viên đại học nào có điểm trung bình cao nhất?
    void timSinhVienDaiHocCoDiemTBCaoNhat();
};

QuanLySinhVien::QuanLySinhVien(/* args */) {
}

QuanLySinhVien::~QuanLySinhVien() {
}

void QuanLySinhVien::nhap() {
    while (true) {
        cout << "Nhap loai sinh vien (1 - Cao dang, 2 - Dai hoc, 0 - Ket thuc): ";
        int loaiSv;
        cin >> loaiSv;
        if (loaiSv == 0) {
            break;
        }
        string mssv, hoTen, diaChi;
        int tongSoTinChi;
        float diemTb;
        cin.ignore();
        cout << "Nhap ma so sinh vien: ";
        getline(cin, mssv);

        cout << "Nhap ho ten: ";
        getline(cin, hoTen);

        cout << "Nhap dia chi: ";
        getline(cin, diaChi);

        cout << "Nhap tong so tin chi: ";
        cin >> tongSoTinChi;

        cout << "Nhap diem trung binh: ";
        cin >> diemTb;

        if (loaiSv == 1) {
            float diemThiTotNghiep;
            cout << "Nhap diem thi tot nghiep: ";
            cin >> diemThiTotNghiep;
            SinhVienCaoDang sv =
                SinhVienCaoDang(mssv, hoTen, diaChi, tongSoTinChi, diemTb, diemThiTotNghiep);
            danhSachSV.push_back(sv);
        } else if (loaiSv == 2) {
            string tenLuanVan;
            float diemLuanVan;

            cout << "Nhap ten luan van: ";
            cin.ignore();
            getline(cin, tenLuanVan);

            cout << "Nhap diem luan van: ";
            cin >> diemLuanVan;

            SinhVienDaiHoc sv =
                SinhVienDaiHoc(mssv, hoTen, diaChi, tongSoTinChi, diemTb, tenLuanVan, diemLuanVan);
            danhSachSinhVienDaiHoc.push_back(sv);
        } else {
            cout << "Lua chon khong hop le";
            return;
        }
    }
}

void QuanLySinhVien::xuat() {
    for (size_t i = 0; i < this->danhSachSV.size(); i++) {
        danhSachSV[i].xuat();
    }

    for (size_t i = 0; i < this->danhSachSinhVienDaiHoc.size(); i++) {
        danhSachSinhVienDaiHoc[i].xuat();
    }
}

void QuanLySinhVien::tinhSoLuongSinhVienCoTheTotNghiep() {
    int t1 = 0, t2 = 0;

    for (size_t i = 0; i < this->danhSachSV.size(); i++) {
        if (danhSachSV[i].xetTotNghiep()) {
            t1++;
        }
    }

    for (size_t i = 0; i < this->danhSachSinhVienDaiHoc.size(); i++) {
        if (danhSachSinhVienDaiHoc[i].xetTotNghiep()) {
            t2++;
        }
    }

    cout << "So luong sinh vien co the tot nghiep: " << t1 + t2 << "\n";
}

void QuanLySinhVien::timSinhVienDaiHocCoDiemTBCaoNhat() {
    if (danhSachSinhVienDaiHoc.size() == 0) {
        cout << "Khong co sinh vien dai hoc nao trong danh sach";
        return;
    }

    SinhVienDaiHoc ans = danhSachSinhVienDaiHoc[0];

    for (int i = 1; i < danhSachSinhVienDaiHoc.size(); i++) {
        if (ans.getDiemTB() <= danhSachSinhVienDaiHoc[i].getDiemTB()) {
            ans = danhSachSinhVienDaiHoc[i];
        }
    }

    cout << "Sinh vien dai hoc co diem trung binh cao nhat: "
         << "\n";
    ans.xuat();
    cout << "\n";
}
