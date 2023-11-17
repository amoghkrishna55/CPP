#include <iostream>
using namespace std;

void minHeapify(int arr[], int size, int index) {
    int smallest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < size && arr[left] < arr[smallest]) {
        smallest = left;
    }
    if (right < size && arr[right] < arr[smallest]) {
        smallest = right;
    }

    if (smallest != index) {
        swap(arr[index], arr[smallest]);
        minHeapify(arr, size, smallest);
    }
}

void deleteMinHeapElement(int arr[], int &size, int element) {
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == element) {
            break;
        }
    }

    if (i == size) {
        // Element not found
        return;
    }

    arr[i] = arr[size - 1];
    size--;

    // Rearrange the heap after deletion
    for (int j = size / 2 - 1; j >= 0; j--) {
        minHeapify(arr, size, j);
    }
}

int main() {
    int size;
    cin >> size;

    int heap[size];
    for (int i = 0; i < size; i++) {
        cin >> heap[i];
    }

    int elementToDelete;
    cin >> elementToDelete;

    deleteMinHeapElement(heap, size, elementToDelete);
    for (int i = 0; i < size; i++) {
        cout << heap[i] << " ";
    }

    return 0;
}
