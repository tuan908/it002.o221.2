#include "Exercise02.h"

int main() {
    Fraction02 fr1, fr2, sum, difference, product, quotient;

    fr1.input();
    fr2.input();

    sum = fr1.add(fr2);
    difference = fr1.subtract(fr2);
    product = fr1.multiply(fr2);
    quotient = fr1.divide(fr2);

    sum.display();
    difference.display();
    product.display();
    quotient.display();

    return 0;
}