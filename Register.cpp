#include <iostream>
#include <string>
#include <limits>

#include "Register.h"

using namespace std;

Register::Register(float currentAmount){
    Register::currentAmount = currentAmount;
    Register::inserts = 0;
}

void Register::calculate(float price){
    float needAmount = price;
    while (needAmount >= 0){
        cout << "Insert $" << needAmount << ": $";
        float userInput;
        if (cin >> userInput){
            if (userInput < 0){
                cout << "Invalid input. Please enter a positive float number" << endl;
                continue;
            }
            else{
                inserts += userInput;
                needAmount -= userInput;
            }
        }else{
            cout << "Invalid input. Please enter a positive float number" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
    }
    if (needAmount < 0){
        cout << "Returning $" << -1 * needAmount << endl;
    }
    
    inserts = 0;
    currentAmount += price;
    cout << "The register has $" << currentAmount << "." << endl;
}