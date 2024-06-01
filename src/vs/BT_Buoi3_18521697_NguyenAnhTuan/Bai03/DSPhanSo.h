#pragma once

#include "PhanSo.h"
#include "vector"

class DSPhanSo {
   private:
    int n;
    vector<PhanSo> ds;

   public:
    DSPhanSo(/* args */);
    ~DSPhanSo();

    void nhap() {
        cin >> n;
        for (int i = 0; i < n; i++) {
            auto ps = PhanSo();
            cin >> ps;
            ds.push_back(ps);
        }
    }

    void xuat() {
        cout << "Danh sach: ";
        for (int i = 0; i < n; i++) {
            cout << ds[i] << " ";
        }
        cout << "\n";
    }

    int getSize() {
        return n;
    }

    void tong();

    void timLonNhat();

    void timNhoNhat();

    void sapXepTangDan();

    void sapXepGiamDan();

    void swap(PhanSo* a, PhanSo* b) {
        PhanSo temp = *a;
        *a = *b;
        *b = temp;
    }

    // Partition function to rearrange elements around a pivot
    int partition(vector<PhanSo>& arr, int low, int high, bool isSortDesc) {
        auto pivot = arr[high];  // Select last element as pivot
        int i = (low - 1);       // Index of smaller element

        for (int j = low; j <= high - 1; j++) {
            // Check if current element is smaller than the pivot
            if (isSortDesc) {
                if (arr[j].getValue() >= pivot.getValue()) {
                    i++;  // Increment index of smaller element
                    swap(&arr[i], &arr[j]);
                }
            } else {
                if (arr[j].getValue() < pivot.getValue()) {
                    i++;  // Increment index of smaller element
                    swap(&arr[i], &arr[j]);
                }
            }
        }
        swap(&arr[i + 1], &arr[high]);  // Place pivot at the correct position
        return (i + 1);
    }

    // Recursive function to implement Quick Sort
    void quickSort(vector<PhanSo>& arr, int low, int high, bool isSortDesc) {
        if (low < high) {
            // pi is partitioning index, arr[p] is now at right place
            int pi = partition(arr, low, high, isSortDesc);

            // Recursively sort elements before and after partition
            quickSort(arr, low, pi - 1, isSortDesc);
            quickSort(arr, pi + 1, high, isSortDesc);
        }
    }
};

DSPhanSo::DSPhanSo(/* args */) {
}

DSPhanSo::~DSPhanSo() {
}

inline void DSPhanSo::tong() {
    PhanSo ans = PhanSo(0);

    for (int i = 0; i < n; i++) {
        ans = ans.cong(this->ds[i]);
    }
    cout << "Tong: " << ans.rutGon() << "\n";
}

inline void DSPhanSo::timLonNhat() {
    if (this->n == 0) {
        return;
    }

    int index = 0;
    PhanSo ans = ds[0];

    for (int i = 1; i < this->n; i++) {
        if (ans < ds[i]) {
            ans = ds[i];
        }
    }
    cout << "Phan so lon nhat: " << ans << "\n";
}

inline void DSPhanSo::timNhoNhat() {
    if (this->n == 0) {
        return;
    }

    PhanSo ans = ds[0];

    for (int i = 1; i < this->n; i++) {
        if (ans >= ds[i]) {
            ans = ds[i];
        }
    }
    cout << "Phan so nho nhat: " << ans << "\n";
}

inline void DSPhanSo::sapXepTangDan() {
    quickSort(ds, 0, n - 1, false);
    cout << "Danh sach sau khi sap xep tang dan: ";
    for (size_t i = 0; i < n; i++) {
        cout << ds[i] << " ";
    }

    cout << "\n";
}

inline void DSPhanSo::sapXepGiamDan() {
    quickSort(ds, 0, n - 1, true);
    cout << "Danh sach sau khi sap xep giam dan: ";
    for (size_t i = 0; i < n; i++) {
        cout << ds[i] << " ";
    }

    cout << "\n";
}