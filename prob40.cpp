#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;

    if ((a < 0 || a > 9999) || (b < 0 || b > 9999) || (c < 0 || c > 9999)) {
        cout << "Invalid input! Numbers should be between 0 and 9999." << endl;
    } else {

        int lastDigitProduct = (a * b) % 10;
        int lastDigitC = c % 10;

        if (lastDigitProduct == lastDigitC) {
            cout << "TRUE" << endl;
        } else {
            cout << "FALSE" << endl;
        }
    }

    return 0;
}


