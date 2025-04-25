#include <iostream>
using namespace std;

void intersectionTwoPointers(int arr1[], int n1, int arr2[], int n2) {
    int i = 0, j = 0;

    cout << "Intersection of arrays using 2-pointer: ";
    while(i < n1 && j < n2) {
        if(i > 0 && arr1[i] == arr1[i - 1]) {
            i++;
            continue;
        }

        if(arr1[i] < arr2[j]) {
            i++;
        }
        else if(arr1[i] > arr2[j]) {
            j++;
        }
        else {
        
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }

    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 2, 3, 4, 5};
    int arr2[] = {2, 2, 3, 5, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    intersectionTwoPointers(arr1, n1, arr2, n2);

    return 0;
}
