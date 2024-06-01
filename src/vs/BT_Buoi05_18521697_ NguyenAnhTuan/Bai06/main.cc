#include "Bo.h"
#include "Cuu.h"
#include "De.h"

int main() {
    vector<Bo> dsBo;
    vector<Cuu> dsCuu;
    vector<De> dsDe;

    int n;
    cout << "Nhap so luong gia suc trong nong trai: ";
    cin >> n;

    for (size_t i = 0; i < n; i++) {
        int type;
        cout << "Nhap loai gia suc (0 - Bo, 1 - Cuu, 2 - De): ";
        cin >> type;

        switch (type) {
            case 0: {
                Bo sv = Bo();
                sv.nhap();
                dsBo.push_back(sv);
                break;
            }
            case 1: {
                Cuu hs = Cuu();
                hs.nhap();
                dsCuu.push_back(hs);
                break;
            }
            case 2: {
                De ns = De();
                ns.nhap();
                dsDe.push_back(ns);
                break;
            }

            default:
                break;
        }
    }

    //     a. Một hôm người chủ nông trại đi vắng, tất cả gia súc trong nông trại đều
    // đói. Hãy cho biết những tiếng kêu nghe được trong nông trại.
    cout << "Nhung tieng keu nghe duoc trong nong trai la: \n";
    for (auto element : dsBo) {
        element.phatRaTiengKeu();
        cout << "\n";
    }

    for (auto element : dsCuu) {
        element.phatRaTiengKeu();
        cout << "\n";
    }

    for (auto element : dsDe) {
        element.phatRaTiengKeu();
        cout << "\n";
    }

    //     b. Chương trình sẽ đưa ra thống kê các thông tin người chủ mong muốn
    // (nêu trên) sau một lứa sinh và một lượt cho sữa của tất cả gia súc
    cout << "Thong ke thong tin: \n";

    for (auto element : dsBo) {
        element.getThongTin();
        cout << "\n";
    }

    for (auto element : dsCuu) {
        element.getThongTin();
        cout << "\n";
    }

    for (auto element : dsDe) {
        element.getThongTin();
        cout << "\n";
    }
}
