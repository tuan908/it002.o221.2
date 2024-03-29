#pragma once

#include <vector>

#include "week01/Exercise02/Exercise02.h"

class Fraction03 : public Fraction02 {
   public:
    Fraction03 findLargestFraction(const vector<Fraction03> &array);
    vector<Fraction03> sort(vector<Fraction03> &array);

    void merge(vector<Fraction03> &array, int left, int middle, int right);
    void mergeSort(vector<Fraction03> &array, int left, int right);
};

Fraction03 Fraction03::findLargestFraction(const vector<Fraction03> &array) {
    if (array.empty()) {
        exit(-1);
    }

    Fraction03 ans = array[0];

    for (Fraction03 element : array) {
        if (ans < element) {
            ans = element;
        }
    }

    return ans;
}

vector<Fraction03> Fraction03::sort(vector<Fraction03> &l) {
    if (l.empty()) {
        exit(-1);
    }

    mergeSort(l, 0, l.size() - 1);

    return l;
}

void Fraction03::mergeSort(vector<Fraction03> &l, int left, int right) {
    if (left < right) {
        int middle = left + ((right - left) / 2);

        mergeSort(l, left, middle);
        mergeSort(l, middle + 1, right);

        merge(l, left, middle, right);
    }
}

void Fraction03::merge(vector<Fraction03> &array, int left, int middle,
                       int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    vector<Fraction03> L(n1), R(n2);

    for (int i = 0; i < n1; i++) {
        L[i] = array[left + i];
    }

    for (int j = 0; j < n2; j++) {
        R[j] = array[middle + 1 + j];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= array[i]) {
            array[k] = L[i];
            ++i;
        } else {
            array[k] = R[j];
            ++j;
        }

        ++k;
    }

    while (i < n1) {
        array[k] = L[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        array[k] = R[j];
        ++j;
        ++k;
    }
}