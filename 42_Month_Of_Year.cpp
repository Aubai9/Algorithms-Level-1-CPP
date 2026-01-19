#include <iostream>
#include <string>

using namespace std;

enum enMonth { 
    Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, 
    Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12 
};

int readNumberInRange(string msg, int from, int to) {
    int number;
    do {
        cout << msg << endl;
        cin >> number;
    } while (number < from || number > to);
    return number;
}

enMonth readMonth() {
    return (enMonth)readNumberInRange("Enter Month Number (1-12):", 1, 12);
}

string getMonthName(enMonth month) {
    switch (month) {
    case enMonth::Jan: return "January";
    case enMonth::Feb: return "February";
    case enMonth::Mar: return "March";
    case enMonth::Apr: return "April";
    case enMonth::May: return "May";
    case enMonth::Jun: return "June";
    case enMonth::Jul: return "July";
    case enMonth::Aug: return "August";
    case enMonth::Sep: return "September";
    case enMonth::Oct: return "October";
    case enMonth::Nov: return "November";
    case enMonth::Dec: return "December";
    default: return "Unknown Month";
    }
}

int main() {
    cout << "\nMonth is: " << getMonthName(readMonth()) << endl;
    return 0;
}