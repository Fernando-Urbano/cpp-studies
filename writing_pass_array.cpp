#include <iostream>
using namespace std;

int main() {
    long TargetArray[25];
    for (int i = 0; i < 25; i++){
        TargetArray[i] = 5;
    }
    cout << "Test 1:\n" << endl;
    cout << "TargetArray[0] = " << TargetArray[0] << endl;
    cout << "TargetArray[24] = " << TargetArray[24] << endl;
    cout << "\nTest 2:\n" << endl;
    cout << "Attempting to assign values beyond the upper bound:" << endl;
    for (int i = 25; i < 35; i++) {
        TargetArray[i] = 10; // may fail to compile
    }
    cout << "TargetArray[0] = " << TargetArray[0] << endl;
    cout << "TargetArray[24] = " << TargetArray[24] << endl;
    cout << "TargetArray[25] = " << TargetArray[25] << endl;
    cout << "TargetArray[30] = " << TargetArray[30] << endl;
}