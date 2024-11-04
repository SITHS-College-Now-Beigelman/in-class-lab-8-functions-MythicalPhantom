//Jefferson Zheng
//November 4, 2024
//Lab 8

#include <iostream>
#include <cmath>
using namespace std;

int doubleMultiply(int a, int b);       //Declares function of doubleMultiple
double getSum(double a, double b, double c);        //Declares function of getSum

int main() {
    double number, doub1, doub2, doub3;        //Declares double variables

    cout << "Choose a Number: ";        //Asks for user input
    cin >> number;      //Stores value to number

    cout << "The Squared Root of " << number << " is " << sqrt(number) << ".\n";     //Outputs the squared root of number
    cout << number << " to the Fourth Power is " << pow(number, 4) << ".\n";        //Outputs number to the fourth power
    cout << number << " Floors to " << floor(number) << ".\n\n";        //Outputs the floor of number

    int num1, num2;       //Declares int variables
    
    cout << "Enter two integers: ";     //Asks for integers
    cin >> num1 >> num2;      //Stores to variables
    cout << "Twice the product of the numbers is: "        //Outputs Text
        << doubleMultiply(num1, num2) << endl;       //Outputs Result of a Function

    cout << "\nEnter Three Decimals: ";      //Asks for 3 decimals
    cin >> doub1 >> doub2 >> doub3;        //Stores to variables
    cout << "The Sum of the Three Decimals is: " << getSum(doub1, doub2, doub3) << endl;        //Outputs the sum of the 3 decimnals

    return 0;       //exits successfully

    /*
    Choose a Number: 12890
    The Squared Root of 12890 is 113.534.    
    12890 to the Fourth Power is 2.76065e+16.
    12890 Floors to 12890.

    Enter two integers: 19023 12
    Twice the product of the numbers is: 456552
    Enter Three Decimals: 123091283.123 1238.123 1923.423
    The Sum of the Three Decimals is: 1.23094e+08
    */
}

int doubleMultiply(int a, int b) {  //Function for doubleMultiply
    return a * b * 2;
}

double getSum(double a, double b, double c) {       //Function for getSum
    double result = a + b + c;
    return a + b + c;
}
