#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::string;
using std::getline;

class DongVat {
	protected:
		int soCon;
		float soLitSua;

	public:
		DongVat() {}
		~DongVat() {}

		void nhap() {
			cout << "Nhap so con: ";
			cin >> soCon;

			cout << "Nhap so lit sua: ";
			cin >> soLitSua;
		}

		void xuat() {
			cout << soCon << " " << soLitSua;
		}

		virtual void keu() = 0;
};

class Bo: public DongVat {
	public:
		void keu() override {
			cout << "Bo\n";
		}
};

class Cuu: public DongVat {
	public:
		void keu() override {
			cout << "Cuu\n";
	}
};

class De: public DongVat {
	public:
		void keu() override {
			cout << "De\n";
		}
};


void nhap(vector<DongVat*> ds, int n) {
	for(int i = 0; i < n; i++){}
}

int main() {
	vector<DongVat*> ds;
	int n;
	cout << "Nhap so luong dong vat";
	cin >> n;

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
