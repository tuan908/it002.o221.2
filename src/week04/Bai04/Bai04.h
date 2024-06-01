#pragma once

#include <cmath>
#include <iostream>

using std::cin;
using std::cout;
using std::istream;
using std::ostream;

class CDate {
   private:
    int day, month, year;

   public:
    CDate(/* args */);
    ~CDate();

    static bool isValid(int d, int m, int y) {
        switch (m) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if (d <= 0 || d > 31) {
                    return false;
                }
                return true;

            case 4:
            case 6:
            case 9:
            case 11:
                if (d <= 0 || d > 30) {
                    return false;
                }
                return true;

            case 2:
                if ((y % 4 == 0 && y % 100 != 0) || (y % 400 != 0)) {
                    if (d <= 0 || d > 29) {
                        return false;
                    } else if (d <= 0 || d > 29) {
                        return false;
                    }
                }
            default:
                return false;
        }
    }

    CDate operator+(int value) {
        CDate ans = CDate(*this);
        ans.day = this->day + value;

        switch (ans.month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if (ans.day > 31) {
                    ans.month++;
                    if (ans.month == 13) {
                        ans.month = 1;
                        ans.year++;
                    }
                    ans.day -= 31;
                }

                break;

            case 4:
            case 6:
            case 9:
            case 11:
                if (ans.day > 30) {
                    ans.month++;
                    ans.month -= 30;
                }
                break;

            case 2:
                if ((ans.year % 4 == 0 && ans.year % 100 != 0) || (ans.year % 400 != 0)) {
                    if (ans.day > 29) {
                        ans.month++;
                        ans.month -= 29;
                    }
                }
                break;
        }

        return ans;
    }

    CDate operator-(int value) {
        CDate ans = CDate(*this);
        ans.day = this->day - value;
        return ans;
    }

    CDate operator++(int) {
        CDate ans = CDate(*this);
        ans.day = this->day + 1;
        return ans;
    }

    CDate operator--(int) {
        CDate ans = CDate(*this);
        ans.day = this->day - 1;
        return ans;
    }

    friend istream& operator>>(istream& is, CDate& t) {
        bool isValidInput = false;

        do {
            is >> t.day >> t.month >> t.year;

            isValidInput = isValid(t.day, t.month, t.year);
            if (!isValidInput) {
                cout << "Invalid input";
            }
        } while (!isValidInput);

        return is;
    }

    friend ostream& operator<<(ostream& os, const CDate& t) {
        os << t.year << "/" << t.month << "/" << t.day;
        return os;
    }
};

CDate::CDate(/* args */) {
}

CDate::~CDate() {
}
