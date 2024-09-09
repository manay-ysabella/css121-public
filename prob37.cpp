#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    else
        return false;
}

int main() {
    int month, day, year;
    string zodiacSign, chineseZodiac;

    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter year: ";
    cin >> year;

    switch (month) {
        case 1:
            zodiacSign = (day <= 19) ? "Capricorn" : "Aquarius";
            break;
        case 2:
            zodiacSign = (day <= 18) ? "Aquarius" : "Pisces";
            break;
        case 3:
            zodiacSign = (day <= 20) ? "Pisces" : "Aries";
            break;
        case 4:
            zodiacSign = (day <= 19) ? "Aries" : "Taurus";
            break;
        case 5:
            zodiacSign = (day <= 20) ? "Taurus" : "Gemini";
            break;
        case 6:
            zodiacSign = (day <= 20) ? "Gemini" : "Cancer";
            break;
        case 7:
            zodiacSign = (day <= 22) ? "Cancer" : "Leo";
            break;
        case 8:
            zodiacSign = (day <= 22) ? "Leo" : "Virgo";
            break;
        case 9:
            zodiacSign = (day <= 22) ? "Virgo" : "Libra";
            break;
        case 10:
            zodiacSign = (day <= 22) ? "Libra" : "Scorpio";
            break;
        case 11:
            zodiacSign = (day <= 21) ? "Scorpio" : "Sagittarius";
            break;
        case 12:
            zodiacSign = (day <= 21) ? "Sagittarius" : "Capricorn";
            break;
        default:
            cout << "Invalid month entered." << endl;
            return 0;
    }

    switch (year % 12) {
        case 0: chineseZodiac = "Monkey"; break;
        case 1: chineseZodiac = "Rooster"; break;
        case 2: chineseZodiac = "Dog"; break;
        case 3: chineseZodiac = "Pig"; break;
        case 4: chineseZodiac = "Rat"; break;
        case 5: chineseZodiac = "Ox"; break;
        case 6: chineseZodiac = "Tiger"; break;
        case 7: chineseZodiac = "Rabbit"; break;
        case 8: chineseZodiac = "Dragon"; break;
        case 9: chineseZodiac = "Snake"; break;
        case 10: chineseZodiac = "Horse"; break;
        case 11: chineseZodiac = "Goat"; break;
    }

    cout << "You are born under the sign of " << zodiacSign << ", Year of the " << chineseZodiac << "." << endl;

    if (isLeapYear(year)) {
        cout << "Year is a leap year." << endl;
    } else {
        cout << "Year is not a leap year." << endl;
    }

    return 0;
}
