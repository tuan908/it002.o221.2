#include "Diem.h"

Diem::Diem(/* args */) {
}

Diem::Diem(double newX, double newY) {
    this->x = newX;
    this->y = newY;
}

Diem::~Diem() {
}

void Diem::tinhTien(double newX, double newY) {
    Diem ans;
    ans.x = ans.x + newX;
    ans.y = ans.y + newY;
    cout << ans.x << " " << ans.y;
}

void Diem::quay(double gocQuay) {
    Diem ans;
    ans.x = x;
    ans.y = y;

    double r = sqrt(pow(ans.x, 2) + pow(ans.y, 2));
    ans.x = r * cos(gocQuay);
    ans.y = r * sqrt(1 - pow(cos(gocQuay), 2));
    cout << ans.x << " " << ans.y;
}