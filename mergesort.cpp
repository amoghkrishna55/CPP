// You are using GCC
#include <iostream>
using namespace std;
void merge(int arr[], int left[], int left_size, int right[], int right_size) {
    //Type your code here
}

void mergeSortOdd(int arr[], int n) {
    //Type your code here
    
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int oddCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            oddCount++;
        }
    }

    if (oddCount == 0) {
        cout << "None";
    } else {
        mergeSortOdd(arr, n);
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}