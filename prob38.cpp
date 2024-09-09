#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    char gender;
    bool isOnBreak;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your gender (M/F): ";
    cin >> gender;
    gender = toupper(gender);  

    char breakInput;
    cout << "Is it break time? (Y/N): ";
    cin >> breakInput;
    isOnBreak = (toupper(breakInput) == 'Y');

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
