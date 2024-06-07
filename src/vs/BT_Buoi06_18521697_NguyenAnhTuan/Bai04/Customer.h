#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class Customer {
	protected:
		string name;
		long count;
        float unitPrice;

	public:
		Customer() {}
		~Customer() {}

		string getName() {
            return name;
		}

		virtual float calculateTotalAmount() = 0;

		virtual void input(ifstream& in) {
            string _count;
            string _unitPrice;
            
			getline(in, name);
            getline(in, _count);
            getline(in, _unitPrice);
            
			this->count = stol(_count);
            this->unitPrice = stof(_unitPrice);
        }
};
