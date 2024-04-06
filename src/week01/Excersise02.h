#pragma once

#include <iostream>

using namespace std;

class Point {
   private:
    double x, y;

   public:
    // Constructors/Destructor
    Point();

    Point(int, int);

    Point(const Point& p);

    ~Point();

    // Getters/Setters:
    int getX() { return this->x; }

    int getY() { return this->y; }

    void setX(double x) { this->x = x; }

    void setY(double y) { this->y = y; }

    // Methods
    void input();

    void output() const;

    void setNewPosition(int newX, int newY);

    // Overloaded operators:
    friend ostream& operator<<(ostream& os, const Point& p) {
        os << p.x << " " << p.y << endl;
        return os;
    }
};

Point::Point() {}

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

Point::Point(const Point& p) {
    this->x = p.x;
    this->y = p.y;
}

Point::~Point() {}

void Point::input() {
    cout << "Nhap hoanh do: ";
    cin >> this->x;

    cout << "Nhap tung do: ";
    cin >> this->y;
}

void Point::output() const {
    cout << "Toa do cua diem (x, y) la: " << this->x << " " << this->y << endl;
}

void Point::setNewPosition(int newX, int newY) {
    this->x = newX;
    this->y = newY;
}