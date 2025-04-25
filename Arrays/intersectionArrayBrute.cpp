#include <iostream>
using namespace std;

void intersectionBruteForce(int arr1[], int n1, int arr2[], int n2) {
    cout << "Intersection of arrays: ";
    
    for(int i = 0; i < n1; i++) {
        bool alreadyPrinted = false;


        for(int k = 0; k < i; k++) {
            if(arr1[i] == arr1[k]) {
                alreadyPrinted = true;
                break;
            }
        }

        if(alreadyPrinted) continue;

        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 2, 3, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    intersectionBruteForce(arr1, n1, arr2, n2);

    return 0;
}
