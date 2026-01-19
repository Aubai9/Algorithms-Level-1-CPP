#include <iostream>
#include <string>

using namespace std;

enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 };

int readNumberInRange(string msg, int from, int to) {
    int number;
    do {
        cout << msg << endl;
        cin >> number;
    } while (number < from || number > to);
    return number;
}

enDayOfWeek readDayOfWeek() {
    return (enDayOfWeek)readNumberInRange("Enter Day Number (1-7):", 1, 7);
}

string getDayOfWeek(enDayOfWeek day) {
    switch (day) {
    case enDayOfWeek::Sat:
        return "Saturday";
    case enDayOfWeek::Sun:
        return "Sunday";
    case enDayOfWeek::Mon:
        return "Monday";
    case enDayOfWeek::Tue:
        return "Tuesday";
    case enDayOfWeek::Wed:
        return "Wednesday";
    case enDayOfWeek::Thu:
        return "Thursday";
    case enDayOfWeek::Fri:
        return "Friday";
    default:
        return "Unknown Day";
    }
}

int main() {
    cout << "\nToday is: " << getDayOfWeek(readDayOfWeek()) << endl;
    return 0;
}