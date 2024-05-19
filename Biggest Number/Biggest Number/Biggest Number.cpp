#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    
    int maxNum = num1;
    
    if (num2 > maxNum) {
        maxNum = num2;
    }
    
    if (num3 > maxNum) {
        maxNum = num3;
    }
    
    cout << "The biggest number is: " << maxNum << endl;
    
    return 0;
}