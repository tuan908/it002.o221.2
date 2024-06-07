#pragma once
#include "Customer.h"

class TypeBCustomer : public Customer {
   private:
    float soNamThanThiet;

   public:
    float calculateTotalAmount() override {
        float percent = 0;

        if (soNamThanThiet * 5 > 50) {
            percent = soNamThanThiet * 5;
        } else {
            percent = 50;
        }

        auto tamTinh = count * unitPrice * ((100 - percent) / 100);
        return tamTinh * 1.1;
    }

    void input(ifstream &in) {
        Customer::input(in);
        in >> soNamThanThiet;
    }
};
