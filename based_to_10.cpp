
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int n = 0;


int baseStringToValue(string digitstring, int base) {
    char output;
    int finaloutput;
    if (digitstring.empty() ) {
        output = 0;
        cout << "I am the TOTAL: " << finaloutput;
    }else{
        output = digitstring.at( digitstring.length() -1 );
        finaloutput = output - 48;
        int currentbase = pow(base, n);

        cout << " "  << output << " is the output next digit \n" ;
        cout << " " << currentbase<< " is the current base that will times this digit \n";
        cout << " " << finaloutput << " is the number version of the output \n ";
 
        finaloutput = finaloutput *  currentbase;
        n ++;
        cout<< " " << finaloutput << " is the final output \n ";
        string remaining_string = digitstring.substr(0, digitstring.length() -1);
        int valueofRemainingString = baseStringToValue(remaining_string, base);
        output += base * valueofRemainingString;
        finaloutput += base * valueofRemainingString;
    }
    return finaloutput;


};

int main(int argc, const char * argv[]) {
//    get_integer();
    baseStringToValue("100", 10);

    return 0;
};
