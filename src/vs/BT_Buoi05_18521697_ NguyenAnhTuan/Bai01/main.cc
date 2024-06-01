#include <vector>

#include "OfficeEmployee.h"
#include "ProductionEmployee.h"

using std::ios_base;

int main() {
    vector<OfficeEmployee> officeEmployees;
    vector<ProductionEmployee> productionEmployees;

    // a. Nhập danh sách nhân viên sản xuất, danh sách nhân viên văn phòng
    int n;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;

    for (size_t i = 0; i < n; i++) {
        int type;
        cout << "Nhap loai nhan vien - Nhan vien san xuat(0), Nhan vien van phong(1): ";
        cin >> type;

        if (type == 0) {
            ProductionEmployee pe = ProductionEmployee();
            pe.input();
            productionEmployees.push_back(pe);
        }

        if (type == 1) {
            OfficeEmployee oe = OfficeEmployee();
            oe.input();
            officeEmployees.push_back(oe);
        }
    }

    // b. Tính lương cho từng nhân viên
    for (auto employee : productionEmployees) {
        employee.calculateSalary();
        cout << employee.getName() << " " << employee.getSalary() << "\n";
    }

    for (auto employee : officeEmployees) {
        employee.calculateSalary();
        cout << employee.getName() << " " << employee.getSalary() << "\n";
    }

    // c. Xuất thông tin danh sách các nhân viên
    for (auto employee : productionEmployees) {
        employee.display();
    }

    for (auto employee : officeEmployees) {
        employee.display();
    }

    // d. Tính tổng lương mà công ty phải trả cho các nhân viên
    double sum = 0;
    for (auto employee : productionEmployees) {
        employee.calculateSalary();
        sum += employee.getSalary();
    }

    for (auto employee : officeEmployees) {
        employee.display();
        sum += employee.getSalary();
    }

    cout << "Tong luong ma cong ty phai tra cho cac nhan vien: " << sum;

    return 0;
}