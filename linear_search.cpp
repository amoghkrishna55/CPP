#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 2, 8, 6, 5, 1, 9, 3, 7};
    int target = 5;
    int index = linearSearch(arr, 9, target);
    cout << index;
}
