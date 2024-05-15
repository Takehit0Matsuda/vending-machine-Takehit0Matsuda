#include <iostream>
#include <string>
#include "Dispenser.h"

using namespace std;

Dispenser::Dispenser(string productName, float price){
    Dispenser::productName = productName;
    Dispenser::price = price;
    itemNum = 10;
}

void Dispenser::listUp(){
    cout << productName << ": $" << price << " (" << itemNum << ")";
}

void Dispenser::purchase(){
    itemNum--;
    cout << productName << " dispensed." << endl;
}

int Dispenser::getItemNum(){
    return itemNum;
}

float Dispenser::getPrice(){
    return price;
}