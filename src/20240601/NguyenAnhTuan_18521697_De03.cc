#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::getline;
using std::string;
using std::to_string;
using std::vector;

class NhanVien {
   protected:
    string hoTen;
    string diaChi;
    string ngaySinh;
    string soDt;

   public:
    NhanVien(/* args */) {
    }
    ~NhanVien() {
    }

    virtual void nhap() {
        cin.ignore();
        cout << "Nhap ho ten: ";
        getline(cin, hoTen);

        cout << "Nhap dia chi: ";
        getline(cin, diaChi);

        cout << "Nhap ngay sinh: ";
        getline(cin, ngaySinh);

        cout << "Nhap so dien thoai: ";
        getline(cin, soDt);
    }

    virtual void xuat() {
        cout << hoTen << " " << diaChi << " " << ngaySinh << " " << soDt << " ";
    }

    virtual double tinhLuong() = 0;

    virtual int getLoai() = 0;
};

class NhanVienChinhThuc : public NhanVien {
   private:
    double luongThoaThuan;

   public:
    NhanVienChinhThuc() {
    }
    ~NhanVienChinhThuc() {
    }

    void nhap() {
        NhanVien::nhap();
        cout << "Nhap luong thoa thuan: ";
        cin >> luongThoaThuan;
    }

    void xuat() {
        NhanVien::xuat();
        cout << to_string(tinhLuong()) << "\n";
    }

    double tinhLuong() override {
        auto baoHiem = luongThoaThuan * 10.5 / 100;

        auto luongTam = luongThoaThuan + 900000 - baoHiem;

        auto thueTNCN = 0;

        if (luongTam > 11000000) {
            auto phanTinhThue = luongTam - 11000000;
            auto t1 = phanTinhThue - 10000000;

            if (t1 <= 0) {
                thueTNCN += (t1 / 20);
            } else {
                thueTNCN += (10000000 / 20);
            }

            auto t2 = t1 - 15000000;

            if (t2 > 0) {
                thueTNCN += (15000000 / 10);
            } else {
                thueTNCN += (t2 / 10);
            }

            auto t3 = phanTinhThue - 25000000;
            if (t3 > 0) {
                thueTNCN += (t3 * 3 / 20);
            }
        }

        return luongTam - thueTNCN;
    }

    int getLoai() override {
        return 1;
    }
};

class NhanVienThoiVu : public NhanVien {
   private:
    float soGioLamViecTrongThang;

   public:
    NhanVienThoiVu() {
    }

    ~NhanVienThoiVu() {
    }

    void nhap() {
        NhanVien::nhap();
        cout << "Nhap so gio lam viec trong thang: ";
        cin >> soGioLamViecTrongThang;
    }

    void xuat() {
        NhanVien::xuat();
        cout << soGioLamViecTrongThang << "\n";
    }

    double tinhLuong() {
        auto luongThucNhan = soGioLamViecTrongThang * 50000 + 500000;

        if (luongThucNhan >= 2000000) {
            return luongThucNhan * 9 / 10;
        }

        return luongThucNhan;
    }

    int getLoai() override {
        return 2;
    }
};

void nhap(vector<NhanVien*>& ds, int n) {
    for (int i = 0; i < n; i++) {
        int loai;
        cout << "Nhap loai nhan vien (1 - Nhan vien chinh thuc, 2 - Nhan vien thoi vu): ";
        cin >> loai;

        if (loai == 1) {
            NhanVien* nv = new NhanVienChinhThuc();
            nv->nhap();
            ds.push_back(nv);
        }

        if (loai == 2) {
            NhanVien* nv = new NhanVienThoiVu();
            nv->nhap();
            ds.push_back(nv);
        }
    }
}

void xuat(vector<NhanVien*>& v) {
    for (auto e : v) {
        e->xuat();
    }
}

void tinhTongLuong(vector<NhanVien*>& v) {
    double sum = 0;

    for (auto e : v) {
        sum += e->tinhLuong();
    }

    cout << "Tong tien luong phai tra la: " << sum << "\n";
}

void timNhanVienThoiVuLuongCaoNhat(vector<NhanVien*> v) {
    vector<NhanVien*> temp;

    for (auto e : v) {
        if (e->getLoai() == 2) {
            temp.push_back(e);
        }
    }

    if (temp.size() > 0) {
        NhanVien* max = temp[0];

        for (int i = 1; i < temp.size(); i++) {
            if (max->tinhLuong() < temp[i]->tinhLuong()) {
                max = temp[i];
            }
        }

        cout << "Thong tin nhan vien thoi vu co luong cao nhat: \n";
        max->xuat();
    } else {
        cout << "Khong co nhan vien thoi vu trong danh sach";
    }
}

int main() {
    vector<NhanVien*> ds;
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;

    // 1. Nhap danh sach nhan vien:
    nhap(ds, n);

    // 2. Xuat danh sach nhan vien:
    xuat(ds);

    // 3. Tinh tong tien luong:
    tinhTongLuong(ds);

    // 4. Cho biet nhan vien thoi vu nao co luong cao nhat:
    timNhanVienThoiVuLuongCaoNhat(ds);

    return 0;
}
