#include <iostream>

using std::cin;
using std::cout;

class ThoiGian {
   private:
    int gio;
    int phut;
    int giay;

   public:
    ThoiGian() {}

    // Hàm khởi tạo
    ThoiGian(int gio, int phut, int giay) {
        this->gio = gio;
        this->phut = phut;
        this->giay = giay;
    }

    // Hàm nhập
    void Nhap() {
        cout << "Nhap gio: ";
        cin >> gio;
        cout << "Nhap phut: ";
        cin >> phut;
        cout << "Nhap giay: ";
        cin >> giay;
    }

    // Hàm xuất
    void Xuat() {
        cout << gio << " gio " << phut << " phut " << giay << " giay" << "\n";
    }

    // Hàm thiết lập
    void setGio(int gio) { this->gio = gio; }
    void setPhut(int phut) { this->phut = phut; }
    void setGiay(int giay) { this->giay = giay; }

    // Hàm lấy giá trị
    int getGio() { return gio; }
    int getPhut() { return phut; }
    int getGiay() { return giay; }

    // Hàm tăng thời gian
    void tangGio(int gio) { this->gio += gio; }

    void tangPhut(int phut) {
        this->phut += phut;
        if (this->phut >= 60) {
            this->phut -= 60;
            this->gio++;
        }
    }

    void tangGiay(int giay) {
        this->giay += giay;
        if (this->giay >= 60) {
            this->giay -= 60;
            this->phut++;
        }
    }

    // Hàm giảm thời gian
    void giamGio(int gio) { this->gio -= gio; }

    void giamPhut(int phut) {
        this->phut -= phut;
        if (this->phut < 0) {
            this->phut += 60;
            this->gio--;
        }
    }

    void giamGiay(int giay) {
        this->giay -= giay;
        if (this->giay < 0) {
            this->giay += 60;
            this->phut--;
        }
    }
};
