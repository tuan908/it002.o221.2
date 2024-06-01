#include "TamGiac.h"

TamGiac::TamGiac(/* args */) {
}

TamGiac::~TamGiac() {
}

void TamGiac::tinhTien() {
    double x, y;
    cin >> x >> y;
    this->a.tinhTien(x, y);
    this->b.tinhTien(x, y);
    this->c.tinhTien(x, y);
}

void TamGiac::quay() {
    double gocQuay;
    cin >> gocQuay;
    this->a.quay(gocQuay);
    this->b.quay(gocQuay);
    this->c.quay(gocQuay);
}

void TamGiac::phongTo() {
    double heSo;
    cin >> heSo;

    a.setX(a.getX() * heSo);
    a.setY(a.getY() * heSo);
    cout << a.getX() << " " << a.getY();

    b.setX(b.getX() * heSo);
    b.setY(b.getY() * heSo);
    cout << b.getX() << " " << b.getY();

    c.setX(c.getX() * heSo);
    c.setY(c.getY() * heSo);
    cout << c.getX() << " " << c.getY();
}

void TamGiac::thuNho() {
    double _heSo;
    cin >> _heSo;
    auto heSo = 1.0 / _heSo;

    a.setX(a.getX() * heSo);
    a.setY(a.getY() * heSo);
    cout << a.getX() << " " << a.getY();

    b.setX(b.getX() * heSo);
    b.setY(b.getY() * heSo);
    cout << b.getX() << " " << b.getY();

    c.setX(c.getX() * heSo);
    c.setY(c.getY() * heSo);
    cout << c.getX() << " " << c.getY();
}
