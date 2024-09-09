#include <iostream>
using namespace std;

// Function to check if a number is a Curzon number
bool isCurzonNumber(int n) {
    // Calculate 1 + 2^n
    long long powerTerm = (1 + (1LL << n));  // 1LL << n is equivalent to 2^n

    // Calculate 1 + 2 * n
    long long multiplicationTerm = (1 + 2 * n);

    // Display calculations
    cout << "1 + 2 ^ " << n << " = " << powerTerm << endl;
    cout << "1 + 2 * " << n << " = " << multiplicationTerm << endl;

    // Check if 1 + 2^n is divisible by 1 + 2 * n
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

    // Input a non-negative integer
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid input! Please enter a non-negative integer." << endl;
    } else {
        // Check if the number is a Curzon number
        if (isCurzonNumber(n)) {
            cout << n << " is a Curzon number." << endl;
        } else {
            cout << n << " is not a Curzon number." << endl;
        }
    }

    return 0;
}

