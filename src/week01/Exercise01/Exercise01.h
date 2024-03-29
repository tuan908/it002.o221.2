#pragma once

#include <process.h>

#include <iostream>

using namespace std;

class Fraction {
   private:
    int numerator, denominator;

   protected:
    int greatestCommonDivisor(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    int leastCommonMultiple(int a, int b) {
        return (a * b) / greatestCommonDivisor(a, b);
    }

    Fraction simplify() {
        Fraction ans;

        int gcdValue =
            greatestCommonDivisor(this->numerator, this->denominator);
        ans.numerator = this->numerator / gcdValue;
        ans.denominator = this->denominator / gcdValue;

        return ans;
    }

   public:
    // Getters:
    int getNumerator() const { return this->numerator; }
    int getDenominator() const { return this->denominator; }

    // Setters:
    void setNumerator(int x) { this->numerator = x; }
    void setDenominator(int y) { this->denominator = y; }

    // Default constructor:
    Fraction();

    // Constructor with arguments:
    Fraction(int, int);

    // Destructor:
    ~Fraction();

    void input() {
        cin >> this->numerator >> this->denominator;

        if (this->denominator == 0) {
            exit(-1);
        }
    }

    void display() {
        Fraction ans = this->simplify();
        if (ans.denominator < 0) {
            ans.numerator *= -1;
            ans.denominator *= -1;
        }
        cout << ans.numerator << "/" << ans.denominator << "\n";
    }

    bool operator<(const Fraction& other) const {
        return this->numerator / this->denominator <
               other.numerator / other.denominator;
    }

    bool operator<=(const Fraction& other) const {
        return this->numerator / this->denominator <=
               other.numerator / other.denominator;
    }
};

Fraction::Fraction() {}

Fraction::Fraction(int x, int y) {
    this->denominator = x;
    this->numerator = y;
}

Fraction::~Fraction() {}
