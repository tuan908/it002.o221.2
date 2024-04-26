#include <iostream>

class NgayThangNam {
   protected:
    int ngay;
    int thang;
    int nam;

   public:
    // Hàm khởi tạo
    NgayThangNam(int ngay = 1, int thang = 1, int nam = 2000) {
        this->ngay = ngay;
        this->thang = thang;
        this->nam = nam;
    }

    // Hàm nhập
    void nhap() {
        std::cout << "Nhap ngay: ";
        std::cin >> ngay;
        std::cout << "Nhap thang: ";
        std::cin >> thang;
        std::cout << "Nhap nam: ";
        std::cin >> nam;
    }

    // Hàm xuất
    void xuat() {
        std::cout << ngay << "/" << thang << "/" << nam << std::endl;
    }

    // Hàm thiết lập
    void setNgay(int ngay) { this->ngay = ngay; }
    void setThang(int thang) { this->thang = thang; }
    void setNam(int nam) { this->nam = nam; }

    // Hàm lấy giá trị
    int getNgay() { return ngay; }
    int getThang() { return thang; }
    int getNam() { return nam; }

    // Hàm tăng ngày tháng năm
    void tangNgay(int ngay) {
        this->ngay += ngay;
        while (this->ngay > soNgayTrongThang(thang, nam)) {
            this->ngay -= soNgayTrongThang(thang, nam);
            this->thang++;
            if (this->thang > 12) {
                this->thang = 1;
                this->nam++;
            }
        }
    }
    void tangThang(int thang) {
        this->thang += thang;
        while (this->thang > 12) {
            this->thang -= 12;
            this->nam++;
        }
    }
    void tangNam(int nam) { this->nam += nam; }

    // Hàm giảm ngày tháng năm
    void giamNgay(int ngay) {
        this->ngay -= ngay;
        while (this->ngay < 1) {
            this->thang--;
            if (this->thang < 1) {
                this->thang = 12;
                this->nam--;
            }
            this->ngay += soNgayTrongThang(thang, nam);
        }
    }
    void giamThang(int thang) {
        this->thang -= thang;
        while (this->thang < 1) {
            this->thang += 12;
            this->nam--;
        }
    }
    void giamNam(int nam) { this->nam -= nam; }

    // Hàm lấy thứ trong tuần
    int layThuTrongTuan() {
        int a = (14 - thang) / 12;
        int y = nam + 4800 - a;
        int m = thang + 12 * a - 3;
        int d = ngay;
        int h = (d + y + y / 4 - y / 100 + y / 400 + m + m / 4 + 5) % 7;
        return h;
    }

    // Hàm kiểm tra năm nhuận
    bool laNamNhuan() {
        return (nam % 4 == 0 && (nam % 100 != 0 || nam % 400 == 0));
    }

   private:
    // Hàm tính số ngày trong tháng
    int soNgayTrongThang(int thang, int nam) {
        switch (thang) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                return 31;
            case 4:
            case 6:
            case 9:
            case 11:
                return 30;
            case 2:
                return laNamNhuan() ? 29 : 28;
        }
        return -1;
    }
};
