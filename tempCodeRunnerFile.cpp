int main() {
    int arr[] = {4, 2, 8, 6, 5, 1, 9, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    int index = linearSearch(arr, n, target);

    if (index != -1) {
        std::cout << "Target " << target << " found at index: " << index << std::endl;
    } else {
        std::cout << "Target " << target << " not found in the array." << std::endl;
    }

    return 0;
}
