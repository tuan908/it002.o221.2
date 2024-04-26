#include "Bai04.h"

int main() {
    ThoiGian t;
    t.Nhap();

    std::cout << "Thoi gian hien tai: ";
    t.Xuat();

    // Thay đổi thời gian
    t.setGio(12);
    t.setPhut(30);
    t.setGiay(45);

    std::cout << "Thoi gian sau khi thay doi: ";
    t.Xuat();

    // Tăng thời gian
    t.tangGio(2);
    t.tangPhut(15);
    t.tangGiay(30);

    std::cout << "Thoi gian sau khi tang: ";
    t.Xuat();

    // Giảm thời gian
    t.giamGio(1);
    t.giamPhut(45);
    t.giamGiay(15);

    std::cout << "Thoi gian sau khi giam: ";
    t.Xuat();

    return 0;
}
