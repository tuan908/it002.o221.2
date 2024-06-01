#include "DaThuc.h"

int main() {
    std::ios::sync_with_stdio(0);
    cin.tie(0);

    DaThuc* A = new DaThuc();
    DaThuc* B = new DaThuc();
    int n, m;
    cin >> n;

    for (int i = 0; i < n; i++) {
        double heSo;
        int soMu;
        cin >> heSo >> soMu;
        A->insertTail(heSo, soMu);
    }

    cin >> m;

    for (int i = 0; i < m; i++) {
        double heSo;
        int soMu;
        cin >> heSo >> soMu;
        B->insertTail(heSo, soMu);
    }

    cout << "Da thuc A: ";
    A->xuatDaThuc();

    cout << "Da thuc B: ";
    B->xuatDaThuc();

    cout << "A + B = ";
    DaThuc* tong = A->cong(B);
    tong->xuatDaThuc();

    cout << "A - B = ";
    DaThuc* hieu = A->tru(B);
    hieu->xuatDaThuc();

    return 0;
}