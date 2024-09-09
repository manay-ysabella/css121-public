#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two numbers (1 - 10): ";
    cin >> num1 >> num2;

    if (num1 < 1 || num1 > 10 || num2 < 1 || num2 > 10) {
        cout << "Input out of range." << endl;
    } 

    else if (num1 + num2 == 10) {
        cout << "The sum of two numbers is equal to 10." << endl;
    } 

    else if (num1 == 10 || num2 == 10) {
        cout << "One of the given numbers is 10." << endl;
    } 

    else {
        cout << "The sum of two numbers is not equal to 10 and none of the input is equal to 10." << endl;
    }

    return 0;
}
