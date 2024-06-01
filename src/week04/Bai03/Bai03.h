#pragma once

#include <iostream>

using std::cin;
using std::cout;
using std::istream;
using std::ostream;

class CTime {
   private:
    int hour, min, sec;

   public:
    CTime(/* args */);
    ~CTime();

    CTime operator+(int value) {
        CTime ans = CTime(*this);
        ans.sec = this->sec + value;
        return ans;
    }

    CTime operator-(int value) {
        CTime ans = CTime(*this);
        ans.sec = this->sec - value;
        while (ans.sec <= 0) {
            ans.sec += 60;
            ans.min--;
        }

        while (ans.min <= 0) {
            ans.min += 60;
            ans.hour--;
        }

        if (ans.hour <= 0) {
            ans.hour = 0;
        }

        return ans;
    }

    CTime operator++(int) {
        CTime ans = CTime(*this);
        ans.sec = this->sec + 1;
        return ans;
    }

    CTime operator--(int) {
        CTime ans = CTime(*this);
        ans.sec = this->sec - 1;
        if (ans.sec == 0) {
            ans.sec = 59;
            ans.min--;
        }

        if (ans.min == 0) {
            ans.min = 59;
            ans.hour--;
        }

        if (ans.hour <= 0) {
            ans.hour = 0;
        }
        return ans;
    }

    friend istream& operator>>(istream& is, CTime& t) {
        is >> t.hour >> t.min >> t.sec;

        if (t.hour < 0 || t.hour > 23 || t.min < 0 || t.sec < 0) {
            cout << "Invalid input";
            exit(0);
        }

        return is;
    }

    friend ostream& operator<<(ostream& os, const CTime& t) {
        os << t.hour << ":" << t.min << ":" << t.sec;
        return os;
    }
};

CTime::CTime(/* args */) {
}

CTime::~CTime() {
}
