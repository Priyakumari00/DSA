#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;

    int i = 0; // Slow pointer

    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++; // Move the unique boundary
            arr[i] = arr[j]; // Copy the next unique element
        }
    }

    return i + 1; // New length of array without duplicates
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newLength = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
