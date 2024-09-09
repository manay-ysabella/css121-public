#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    char gender;
    bool isOnBreak;

    // Input age
    cout << "Enter your age: ";
    cin >> age;

    // Input gender (M/F)
    cout << "Enter your gender (M/F): ";
    cin >> gender;
    gender = toupper(gender);  // Ensure gender is uppercase

    // Input break status (Y = on break, N = not on break)
    char breakInput;
    cout << "Is it break time? (Y/N): ";
    cin >> breakInput;
    isOnBreak = (toupper(breakInput) == 'Y');

    // Check if the bartender should serve drinks
    if (isOnBreak) {
        cout << "Bartender is on break, no drinks will be served." << endl;
    } else {
        if (gender == 'M' && age >= 21) {
            cout << "You are eligible to be served drinks." << endl;
        } else if (gender == 'F' && age >= 18) {
            cout << "You are eligible to be served drinks." << endl;
        } else {
            cout << "You are not eligible to be served drinks." << endl;
        }
    }

    return 0;
}
