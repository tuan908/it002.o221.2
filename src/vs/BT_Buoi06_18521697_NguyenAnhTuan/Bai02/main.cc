#include "Developer.h"
#include "Tester.h"

void nhap(vector<Employee*>& ds, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap loai nhan vien (1 - Developer, 2 - Tester): ";
        int type;
        cin >> type;

        if (type == 1) {
            Employee* e = new Developer;
            e->nhap();
            ds.push_back(e);
        }

        if (type == 2) {
            Employee* e = new Tester;
            e->nhap();
            ds.push_back(e);
        }
    }
}

void xuat(vector<Employee*> ds) {
    cout << "Danh sach nhan vien: \n";
    for (auto e : ds) {
        e->xuat();
        cout << "\n";
    }
}

void getEmployeesHaveBaseSalarySmallerThanAvgSalary(vector<Employee*> ds) {
    if (ds.size() == 0) {
        return;
    }

    float avgSalary = 0;

    for (auto e : ds) {
        avgSalary += e->getSalary();
    }

    avgSalary = avgSalary / ds.size();

    cout << "Danh sach nhan vien co muc luong thap hon luong trung binh: \n";
    for (auto e : ds) {
        if (avgSalary > e->getSalary()) {
            e->xuat();
            cout << "\n";
        }
    }
}

void getHiOrLoSalaryEmployeeInfo(vector<Employee*> ds) {
    int hiIndex = 0, loIndex = 0;

    for (int i = 1; i < ds.size(); i++) {
        if (ds[i]->getSalary() < ds[i]->getSalary()) {
            loIndex = i;
        }

        if (ds[i]->getSalary() > ds[i]->getSalary()) {
            hiIndex = i;
        }
    }

    cout << "Nhan vien luong cao nhat: ";
    ds[hiIndex]->xuat();
    cout << "\n";

    cout << "Nhan vien luong thap nhat: ";
    ds[loIndex]->xuat();
    cout << "\n";
}

void getHiOrLoSalaryDevOrTesterInfo(vector<Employee*> ds) {
    int hiIndex = 0, loIndex = 0;

    for (int i = 1; i < ds.size(); i++) {
        if (ds[i]->getType() == 1 && ds[hiIndex]->getSalary() < ds[i]->getSalary()) {
            loIndex = i;
        }

        if (ds[i]->getType() == 0 && ds[loIndex]->getSalary() > ds[i]->getSalary()) {
            hiIndex = i;
        }
    }

    cout << "Lap trinh vien luong cao nhat: ";
    ds[hiIndex]->xuat();
    cout << "\n";

    cout << "Kiem thu vien luong thap nhat: ";
    ds[loIndex]->xuat();
    cout << "\n";
}

int main() {
    vector<Employee*> ds;
    int n;

    cout << "Nhap so luong nhan vien: ";
    cin >> n;

    // a.Nhập vào danh sách nhân viên
    nhap(ds, n);

    // b.Xuất danh sách nhân viên
    xuat(ds);

    // c.Xuất danh sách các nhân viên có lương thấp hơn mức lương trung bình của các nhân viên
    // trong công ty
    getEmployeesHaveBaseSalarySmallerThanAvgSalary(ds);

    // d.Xuất thông tin nhân viên có lương cao nhất
    // e.Xuất thông tin nhân viên có lương thấp nhất
    getHiOrLoSalaryEmployeeInfo(ds);

    // f.Xuất thông tin lập trình viên có lương cao nhất
    // g.Xuất thông tin kiểm chứng viên có lương thấp nhất
    getHiOrLoSalaryDevOrTesterInfo(ds);
}