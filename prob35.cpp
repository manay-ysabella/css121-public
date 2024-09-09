#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Input two numbers
    cout << "Enter two numbers (1 - 10): ";
    cin >> num1 >> num2;

    // Check if inputs are in the range 1-10
    if (num1 < 1 || num1 > 10 || num2 < 1 || num2 > 10) {
        cout << "Input out of range." << endl;
    } 
    // Check if the sum is equal to 10
    else if (num1 + num2 == 10) {
        cout << "The sum of two numbers is equal to 10." << endl;
    } 
    // Check if one of the numbers is 10
    else if (num1 == 10 || num2 == 10) {
        cout << "One of the given numbers is 10." << endl;
    } 
    // Neither sum is 10 nor is any number 10
    else {
        cout << "The sum of two numbers is not equal to 10 and none of the input is equal to 10." << endl;
    }

    return 0;
}
