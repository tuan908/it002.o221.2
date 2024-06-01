#include "DaGiac.h"

DaGiac::DaGiac(/* args */) {
}

DaGiac::~DaGiac() {
}

void DaGiac::nhap() {
    bool isValid = false;
    do {
        cin >> this->n;
        isValid = true;
        if (n < 3) {
            isValid = false;
        }
    } while (isValid = false);

    for (int i = 0; i < n; i++) {
        cin >> points[i];
    }
}

void DaGiac::xuat() {
    for (int i = 0; i < n; i++) {
        cout << points[i];
    }
    cout << "\n";
}

void DaGiac::tinhTien() {
    double x, y;
    cin >> x >> y;

    for (int i = 0; i < n; i++) {
        points[i].tinhTien(x, y);
        cout << "\n";
    }
}

void DaGiac::quay() {
    double gocQuay;
    cin >> gocQuay;

    for (int i = 0; i < n; i++) {
        points[i].quay(gocQuay);
        cout << "\n";
    }
}

void DaGiac::phongTo() {
    double heSo;
    cin >> heSo;

    for (int i = 0; i < n; i++) {
        points[i].setX(points[i].getX() * heSo);
        points[i].setY(points[i].getY() * heSo);
        cout << points[i];
        cout << "\n";
    }
}

void DaGiac::thuNho() {
    double _heSo;
    cin >> _heSo;
    auto heSo = 1.0 / _heSo;

    for (int i = 0; i < n; i++) {
        points[i].setX(points[i].getX() * heSo);
        points[i].setY(points[i].getY() * heSo);
        cout << points[i];
        cout << "\n";
    }
}
