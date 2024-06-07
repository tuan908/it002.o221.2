#pragma once
#include "Customer.h"

class TypeCCustomer : public Customer {
   public:
    float calculateTotalAmount() override {
        auto temp = count * unitPrice;
        return temp / 2 * 1.1;
    };

    void input(ifstream &in) {
        Customer::input(in);
    }
};