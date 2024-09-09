#include <iostream>
using namespace std;

int main() {
    int age;
    char hasStudentID, parentalSupervision;
    double ticketPrice = 200.0;
    const double discount15 = 0.15;
    const double discount5 = 0.05;

    // Ask for user's age
    cout << "Enter your age: ";
    cin >> age;

    // Validate age range
    if (age <= 0 || age > 120) {
        cout << "Invalid age." << endl;
        return 0;
    }

    // Check if the user is between 2 and 3
    if (age >= 2 && age <= 3) {
        cout << "You are allowed to watch the movie with parental supervision." << endl;
        cout << "Your ticket is free." << endl;
        return 0;
    }

    // Ask if the user has a student ID
    cout << "Do you have a student ID? (Y/N): ";
    cin >> hasStudentID;
    hasStudentID = toupper(hasStudentID);

    // Ask for parental supervision if the user is between 4 and 15
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

    // Check for ages above 15
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

    // Age above 18
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
