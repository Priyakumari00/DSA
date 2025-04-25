#include <iostream>
#include <vector>
using namespace std;

void moveAllZeros(int arr[], int n){
    vector<int> temp;

    // Store all non-zero elements
    for(int i = 0; i < n; i++){
        if(arr[i] != 0)
            temp.push_back(arr[i]);
    }

    // Fill original array with non-zero elements
    int i = 0;
    for(; i < temp.size(); i++){
        arr[i] = temp[i];
    }

    // Fill remaining with zeroes
    for(; i < n; i++){
        arr[i] = 0;
    }

    // Output
    cout << "Array after pushing zeroes to the end: ";
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1, 0, 5, 0, 6, 7, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    moveAllZeros(arr, n);
    return 0;
}
