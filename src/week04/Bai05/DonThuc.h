#include <iomanip>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::istream;
using std::ostream;
using std::to_string;

class DonThuc {
   public:
    double heSo;
    int soMu;
    DonThuc* next;

    DonThuc(double heSo, int soMu) {
        this->heSo = heSo;
        this->soMu = soMu;
        this->next = nullptr;
    }

    void xuatDonThuc(bool isHeadNode = false) {
        if (this->heSo == 0)
            return;

        if (this->heSo == 1) {
            cout << "+x^" << this->soMu;
        } else if (this->heSo == -1) {
            cout << "-x^" << this->soMu;
        } else {
            if (this->heSo < 0) {
                cout << this->heSo;
            } else if (this->heSo > 0) {
                !isHeadNode ? cout << "+" << this->heSo : cout << this->heSo;
            }

            if (this->soMu == 0) {
            } else if (this->soMu == 1) {
                cout << "x";
            } else {
                cout << "x^" << this->soMu;
            }
        }
    }
};