#include <iostream>
using namespace std;

bool isCurzonNumber(int n) {

    long long powerTerm = (1 + (1LL << n));  

    long long multiplicationTerm = (1 + 2 * n);

    cout << "1 + 2 ^ " << n << " = " << powerTerm << endl;
    cout << "1 + 2 * " << n << " = " << multiplicationTerm << endl;

    if (powerTerm % multiplicationTerm == 0) {
        cout << powerTerm << " is a multiple of " << multiplicationTerm << "." << endl;
        return true;
    } else {
        cout << powerTerm << " is not a multiple of " << multiplicationTerm << "." << endl;
        return false;
    }
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid input! Please enter a non-negative integer." << endl;
    } else {

        if (isCurzonNumber(n)) {
            cout << n << " is a Curzon number." << endl;
        } else {
            cout << n << " is not a Curzon number." << endl;
        }
    }

    return 0;
}

