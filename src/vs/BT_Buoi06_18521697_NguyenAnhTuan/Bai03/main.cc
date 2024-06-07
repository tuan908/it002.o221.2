#include "Bo.h"
#include "Cuu.h"
#include "De.h"

void nhap(vector<DongVat*> &ds, int n) {
	for(int i = 0; i < n; i++){
		int type;
		cout << "Nhap loai gia suc (1 - Bo, 2 - Cuu, 3 - De): ";
		cin >> type;

		if(type == 1) {
			DongVat *a = new Bo();
			a->nhap();
			ds.push_back(a);
		}

		if(type == 2) {
			DongVat *a = new Cuu();
			a->nhap();
			ds.push_back(a);
		}

		if(type == 3) { 
			DongVat *a = new De();
			a->nhap();
			ds.push_back(a);
		}
	}
}

int main() {
	vector<DongVat*> ds;
	int n;
	cout << "Nhap so luong dong vat: ";
	cin >> n;

	nhap(ds, n);

	// 1. Cho biet nhung tieng keu nghe duoc:
	for(auto a: ds) {
		a->keu();
	}

	// 2. Thong tin cac con thu o nong trai:
	for(auto a: ds) {
		a->xuat();
	}

	return 0;
}
