#pragma once

#include <iostream>
#include <string>

using namespace std;

class String {
   private:
    char* data;
    int length;

   public:
    // Hàm khởi tạo
    String() {
        data = nullptr;
        length = 0;
    }

    void setLength(int length) { this->length = length; }
    int getLength() const { return this->length; }

    void setData(char* data) { this->data = data; }
    char* getData() { return this->data; }

    // Hàm khởi tạo với chuỗi ký tự
    String(char* str) { this->data = str; }

    // Hàm thiết lập
    void SetData(const char* str) {
        delete[] data;
        strcpy_s(data, length, str);
    }

    // Hàm hủy bỏ
    ~String() { delete[] data; }

    // Hàm lấy độ dài chuỗi
    int Length() { return length; }

    // Hàm nối hai chuỗi
    String operator+(String& other) {
        String result;
        result.data = this->data + *other.getData();
        return result;
    }

    // Hàm đảo chuỗi
    void Reverse() {
        for (int i = 0, j = length - 1; i < j; ++i, --j) {
            char temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    // Hàm chuyển đổi chuỗi sang chữ hoa
    void ToUpper() {
        for (int i = 0; i < length; ++i) {
            data[i] = toupper(data[i]);
        }
    }

    // Hàm chuyển đổi chuỗi sang chữ thường
    void ToLower() {
        for (int i = 0; i < length; ++i) {
            data[i] = tolower(data[i]);
        }
    }

    // Hàm nhập chuỗi
    void Nhap() {
        std::cin >> data;
        int n = 0;
        length = strlen(data);
    }

    // Hàm xuất chuỗi
    void Xuat() { std::cout << data << std::endl; }
};