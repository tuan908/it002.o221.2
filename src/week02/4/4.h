#pragma once

#include <iostream>

using std::cin;
using std::cout;
using std::istream;
using std::ostream;

#define MAX_H 24
#define MAX_M 60
#define MAX_S 60
#define MAX_ADD_M 24 * 60
#define MAX_ADD_S 24 * 60 * 60

class Time {
   private:
    int hour, minute, second;

   public:
    Time(/* args */);

    Time(int hour, int minute, int second) {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }

    ~Time();

    int getHour() { return this->hour; }

    void setHour(int value) { this->hour = value; }

    int getMinute() { return this->minute; }

    void setMinute(int value) { this->minute = value; }

    int getSecond() { return this->second; }

    void setSecond(int value) { this->second = value; }

    Time addHour(int h) {
        Time ans;
        if (this->hour + h > 24) {
            exit(0);
        }
        ans.hour = this->hour + h;
        ans.minute = this->minute;
        ans.second = this->second;
        return ans;
    }

    Time addMin(int m) {
        Time ans;
        auto t = this->minute + m;
        if (t > MAX_M) {
            ans.hour = t / MAX_M;
            if (ans.hour > 24) {
                exit(0);
            }
            ans.minute = t % MAX_M;
            ans.second = this->second;
        } else {
            ans.hour = this->hour;
            ans.minute = this->minute + m;
            ans.second = this->second;
        }

        return ans;
    }

    Time addSec(int s) {
        if (s < 0) exit(0);
        Time ans;
        ans.hour = this->hour;
        ans.minute = this->minute;
        auto t = this->second + s;
        if (t > MAX_S - 1) {
            ans.minute = this->minute + t / MAX_S;
            ans.second = this->second + t % MAX_S;
        }
        return ans;
    }

    Time subHour(int h) {
        Time ans;

        if (this->hour - h < 0) {
            exit(0);
        } else {
            ans.hour = this->hour - h;
            ans.minute = this->minute;
            ans.second = this->second;
        }

        return ans;
    }

    Time subMin(int h) {
        Time ans;
        if (ans.hour + h > 24) {
            exit(0);
        }
        ans.hour = this->hour;
        ans.minute = this->minute;
        ans.second = this->second;
        return ans;
    }

    Time subSec(const Time &other) {
        Time ans;
        ans.hour = this->hour * other.minute - this->minute * other.hour;
        ans.minute = this->minute * other.minute;
        return ans;
    }

    friend ostream &operator<<(ostream &os, const Time &p) {
        os << p.hour << ":" << p.minute << ":" << p.second;
        if (p.hour > 24) {
            exit(0);
        }

        if (p.minute > 60 || p.second > 60) {
            exit(0);
        }
        return os;
    }

    friend istream &operator>>(istream &is, Time &p) {
        is >> p.hour >> p.minute >> p.second;
        return is;
    }
};

Time::Time(/* args */) {}

Time::~Time() {}
