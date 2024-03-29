#pragma once

#include "week01/Exercise01/Exercise01.h"

class Fraction02 : public Fraction {
   public:
    Fraction02 add(Fraction02 &other);
    Fraction02 subtract(Fraction02 &other);
    Fraction02 multiply(Fraction02 &other);
    Fraction02 divide(Fraction02 &other);
};

Fraction02 Fraction02::add(Fraction02 &other) {
    Fraction02 ans;

    int ansNumerator = (this->getNumerator() * other.getDenominator()) +
                       (this->getDenominator() * other.getNumerator());
    ans.setNumerator(ansNumerator);
    ans.setDenominator(this->getDenominator() * other.getDenominator());
    return ans;
}

Fraction02 Fraction02::subtract(Fraction02 &other) {
    Fraction02 ans;
    int ansNumerator = (this->getNumerator() * other.getDenominator()) -
                       (this->getDenominator() * other.getNumerator());
    ans.setNumerator(ansNumerator);
    ans.setDenominator(this->getDenominator() * other.getDenominator());
    return ans;
}

Fraction02 Fraction02::multiply(Fraction02 &other) {
    Fraction02 ans;
    ans.setNumerator(this->getNumerator() * other.getDenominator());
    ans.setDenominator(this->getDenominator() * other.getDenominator());
    return ans;
}

Fraction02 Fraction02::divide(Fraction02 &other) {
    Fraction02 ans;
    ans.setNumerator(this->getNumerator() * other.getDenominator());
    ans.setDenominator(this->getDenominator() * other.getNumerator());
    return ans;
}