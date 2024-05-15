#ifndef DISPENSER_H
#define DISPENSER_H

#include <iostream>
#include <string>

using namespace std;

class Dispenser {
    private:
        string productName;
        float price;
        int itemNum;
        
    public:
        Dispenser(string productName, float price);
        void listUp();
        void purchase();
        int getItemNum();
        float getPrice();
};

#endif