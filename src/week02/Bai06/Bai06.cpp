#include "Bai06.h"

int main() {
    String str1("Hello");
    String str2("World!");

    // Nối chuỗi
    String str3 = str1 + str2;
    str3.Xuat();  // In ra "HelloWorld!"

    // Đảo chuỗi
    str3.Reverse();
    str3.Xuat();  // In ra "!dlroWolleH"

    // Chuyển đổi chuỗi sang chữ hoa
    str3.ToUpper();
    str3.Xuat();  // In ra "!DLROWOLLEH"

    // Chuyển đổi chuỗi sang chữ thường
    str3.ToLower();
    str3.Xuat();  // In ra "!dlrowolleH"

    // Nhập chuỗi
    String str4;
    str4.Nhap();
    str4.Xuat();

    return 0;
}