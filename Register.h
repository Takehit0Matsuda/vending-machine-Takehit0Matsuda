#ifndef REGISTER_H
#define REGISTER_H

#include <iostream>
#include <string>

using namespace std;

class Register {
    private:
        float currentAmount;
        float inserts;
        
    public:
        Register(float currentAmount);
        void calculate(float price);
};

#endif