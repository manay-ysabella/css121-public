#include <iostream>
using namespace std;

int main() {
    int age;
    char hasStudentID, parentalSupervision;
    double ticketPrice = 200.0;
    const double discount15 = 0.15;
    const double discount5 = 0.05;

    cout << "Enter your age: ";
    cin >> age;

    if (age <= 0 || age > 120) {
        cout << "Invalid age." << endl;
        return 0;
    }

    if (age >= 2 && age <= 3) {
        cout << "You are allowed to watch the movie with parental supervision." << endl;
        cout << "Your ticket is free." << endl;
        return 0;
    }

    cout << "Do you have a student ID? (Y/N): ";
    cin >> hasStudentID;
    hasStudentID = toupper(hasStudentID);

    if (age >= 4 && age <= 15) {
        cout << "Do you have parental supervision? (Y/N): ";
        cin >> parentalSupervision;
        parentalSupervision = toupper(parentalSupervision);

        if (parentalSupervision == 'Y') {
            if (hasStudentID == 'Y') {
                ticketPrice -= ticketPrice * discount15;
                cout << "You are eligible for a 15% student discount with parental supervision." << endl;
                cout << "Ticket price: " << ticketPrice << "php" << endl;
            } else {
                cout << "You are allowed to watch the movie with parental supervision." << endl;
                cout << "Ticket price: " << ticketPrice << "php" << endl;
            }
        } else {
            cout << "You cannot watch the movie without parental supervision." << endl;
        }
    }

    else if (age > 15 && age < 18) {
        if (hasStudentID == 'Y') {
            ticketPrice -= ticketPrice * discount5;
            cout << "You are eligible for a 5% student discount." << endl;
            cout << "Ticket price: " << ticketPrice << "php" << endl;
        } else {
            cout << "You are allowed to watch the movie." << endl;
            cout << "Ticket price: " << ticketPrice << "php" << endl;
        }
    }

    else if (age >= 18) {
        if (hasStudentID == 'Y') {
            ticketPrice -= ticketPrice * discount5;
            cout << "You are eligible for a 5% student discount." << endl;
        }
        cout << "You are allowed to watch the movie." << endl;
        cout << "Ticket price: " << ticketPrice << "php" << endl;
    }

    return 0;
}
