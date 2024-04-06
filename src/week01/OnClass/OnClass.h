#pragma once

#include "week01/Exercise03/Exercise03.h"

class FractionArray {
   private:
    int size;
    Fraction03* array = new Fraction03[size];

   public:
    Fraction03* getArray() { return this->array; }

    void input() {
        cin >> size;
        Fraction03 f;
        for (int i = 0; i < size; i++) {
            f.input();
            array[i] = f;
        }
    }

    void display() {
        for (size_t i = 0; i < this->size; i++) {
            array[i].display();
        }
    }
    ~FractionArray() { delete[] array; }
};
