
#include <iostream>
#include "dec2Bin.h"

int main()
{   
    binConverter bc; 
    string line; 
    int num; 
    //get line from user
    std::cout << "Hello\n";
    while (true) {
        cout << "Please enter an integer to convert: "; 
        getline(cin, line);
        //convert string to integer
        num = stoi(line);
        if (num <= 0) {
            cout << "\nPlease enter a valid number" << endl;
            return 0;
        }
        //store decimal in bin converter and get binary string
        bc.setDec(num);
        line = bc.getBinStr();
        //output decimal number in binary string
        cout << num << " in binary is: " << line << endl;
    }
    return 1; 
}
