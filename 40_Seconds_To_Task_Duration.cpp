#include <iostream>
#include <cmath>

using namespace std;

struct strTaskDuration {
    int noDays, noHours, noMinutes, noSeconds;
};

int readPositiveNumber(string msg) {
    int number;
    do {
        cout << msg << endl;
        cin >> number;
    } while (number < 0);
    return number;
}

strTaskDuration SecondsToTaskDuration(int totalSeconds) {
    strTaskDuration taskDuration;
    
    const int secondsPerDay = 24 * 60 * 60;
    const int secondsPerHour = 60 * 60;
    const int secondsPerMinute = 60;
    
    int remainder = 0;
    
    taskDuration.noDays = totalSeconds / secondsPerDay;
    remainder = totalSeconds % secondsPerDay;
    
    taskDuration.noHours = remainder / secondsPerHour;
    remainder = remainder % secondsPerHour;
    
    taskDuration.noMinutes = remainder / secondsPerMinute;
    remainder = remainder % secondsPerMinute;
    
    taskDuration.noSeconds = remainder;
    
    return taskDuration;
}

void printTaskDurationDetails(strTaskDuration taskDuration) {
    cout << "\nFormat (DD:HH:MM:SS)\n";
    cout << taskDuration.noDays << ":" 
         << taskDuration.noHours << ":" 
         << taskDuration.noMinutes << ":" 
         << taskDuration.noSeconds << endl;
}

int main() {
    int totalSeconds = readPositiveNumber("Enter total seconds:");
    printTaskDurationDetails(SecondsToTaskDuration(totalSeconds));
    return 0;
}