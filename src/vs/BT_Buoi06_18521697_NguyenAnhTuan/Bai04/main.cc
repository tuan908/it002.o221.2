#include "TypeACustomer.h"
#include "TypeBCustomer.h"
#include "TypeCCustomer.h"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<Customer*> customers;

    ifstream in;
    ofstream out;

    in.open("XYZ.INP");
    out.open("XYZ.OUT");

    if (!in) {
        cout << "Error read file XYZ.INP";
    }

    int x = 0, y = 0, z = 0;
    in >> x >> y >> z;

    out << x << " " << y << " " << z << "\n";

    string line;

    if (!getline(in, line)) {
        cout << "Error";
    }

    for (size_t i = 0; i < x; ++i) {
        Customer* customer = new TypeACustomer;
        customer->input(in);
        customers.push_back(customer);
    }

    for (auto customer : customers) {
        out << customer->getName() << "\n";
        out << customer->calculateTotalAmount() << "\n";
    }
    in.close();
    out.close();

    // out.open("XYZ.OUT");
    // out << "111\n";
    // out << "TenKhachHangA1\n";
    // out.close();

    return 0;
}
