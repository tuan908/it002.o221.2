#pragma once
#include "Customer.h"

class TypeACustomer : public Customer {
   public:
    float calculateTotalAmount() override {
        auto tamTinh = count * unitPrice;
        return tamTinh * 1.1;
    }

    void input(ifstream &in) {
        Customer::input(in);
    }
};
