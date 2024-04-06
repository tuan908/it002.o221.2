#include "Excersise02.h"

int main() {
    Point p1, p2;
    int newX, newY;

    p1.input();
    p1.output();

    cout << "Nhap hoanh do moi: ";
    cin >> newX;

    cout << "Nhap tung do moi: ";
    cin >> newY;
    
    p1.setNewPosition(newX, newY);
    
    p1.output();

    return 0;
}