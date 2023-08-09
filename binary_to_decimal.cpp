#include <iostream>
using namespace std;

int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0, base = 1, remainder;
    
    while (binaryNumber > 0) {
        remainder = binaryNumber % 10;
        decimalNumber += remainder * base;
        binaryNumber /= 10;
        base *= 2;
    }
    
    return decimalNumber;
}

int main() {
    long long binary;
    
    cin >> binary;
    
    int decimal = binaryToDecimal(binary);
    cout << "Decimal: " << decimal << endl;
}
