#pragma once

#include "PhanSo.h"

class DSPhanSo {
   private:
    int n;
    PhanSo* ds = new PhanSo[n];

   public:
    DSPhanSo(/* args */);
    ~DSPhanSo();

    void nhap() {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> ds[i];
        }
    }

    void xuat() {
        for (int i = 0; i < n; i++) {
            cout << ds[i] << "\n";
        }
    }

    int getSize() {
        return n;
    }

    void tong();

    void timLonNhat();

    void timNhoNhat();

    void sapXepTangDan();

    void sapXepGiamDan();
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
    cout << ans.rutGon() << "\n";
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
    cout << ans << "\n";
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
    cout << ans << "\n";
}

inline void DSPhanSo::sapXepTangDan() {
}

inline void DSPhanSo::sapXepGiamDan() {
}
