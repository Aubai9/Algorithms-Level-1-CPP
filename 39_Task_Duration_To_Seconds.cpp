#include <iostream>

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

strTaskDuration readTaskDuration() {
    strTaskDuration taskDuration;
    taskDuration.noDays = readPositiveNumber("Enter Days:");
    taskDuration.noHours = readPositiveNumber("Enter Hours:");
    taskDuration.noMinutes = readPositiveNumber("Enter Minutes:");
    taskDuration.noSeconds = readPositiveNumber("Enter Seconds:");
    return taskDuration;
}

int taskDurationInSeconds(strTaskDuration taskDuration) {
    int durationInSeconds = 0;
    
    durationInSeconds = taskDuration.noDays * 24 * 60 * 60;
    durationInSeconds += taskDuration.noHours * 60 * 60;
    durationInSeconds += taskDuration.noMinutes * 60;
    durationInSeconds += taskDuration.noSeconds;
    
    return durationInSeconds;
}

int main() {
    cout << "\nTask Duration in Seconds: " << taskDurationInSeconds(readTaskDuration()) << endl;
    return 0;
}