#include <iostream>
#include <string>
#include <limits>

#include "Dispenser.h"
#include "Register.h"

using namespace std;

int main(int argc, const char **argv){
    
    cout << "Welcome to the vending machine!" << endl;
    
    Dispenser items[5] = {
        Dispenser("KitKat", 1.75),
        Dispenser("Oreo", 2.5),
        Dispenser("Doritos", 3.25),
        Dispenser("Muffin", 5.00),
        Dispenser("Lay's", 7.50)
    };
    
    Register r(50);

    while (true){
        for (int i = 0; i < 5; i++){
            cout << i+1 << ". ";
            items[i].listUp();
            cout << endl;
        }   

        cout << "Make your selection (-1 to Exit) : ";
        int userInput;
        if (cin >> userInput){
            int indexNum = userInput -1;
            if (userInput == -1){
                break;
            }else if(userInput < 1 || userInput > 5){
                cout << "Invalid input. Please enter an integer between 1-5." << "\n" << endl;
                continue;
            }
            
            if (items[indexNum].getItemNum() == 0){
                cout << "SOLD OUT" << endl;
                continue;
            }
            
            r.calculate(items[indexNum].getPrice());
            items[indexNum].purchase();
            
        }else{
            cout << "Invalid input. Please enter an integer between 1-5." << "\n" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

    }
    
    cout <<"Bye!" << endl;
    return 0;

}