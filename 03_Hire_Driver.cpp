#include <iostream>

using namespace std;

struct strInfo {
    int age;
    bool hasDriverLicense;
    bool hasRecommend;
};

strInfo readInfo() {
    strInfo info;
    cout << "Enter your age: " << endl;
    cin >> info.age;
    
    cout << "Do you have driver license? (1 for Yes, 0 for No): " << endl;
    cin >> info.hasDriverLicense;
    
    cout << "Do you have Recommendation? (1 for Yes, 0 for No): " << endl;
    cin >> info.hasRecommend;
    
    return info;
}

bool isAccepted(strInfo info) {
    if (info.hasRecommend) {
        return true;
    } else {
        return (info.age > 21 && info.hasDriverLicense);
    }
}

void printResult(strInfo info) {
    if (isAccepted(info)) {
        cout << "\nHired" << endl;
    } else {
        cout << "\nRejected" << endl;
    }
}

int main() {
    printResult(readInfo());
    return 0;
}