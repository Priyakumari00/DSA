#include<iostream>
using namespace std;

void moveAllZeros(int arr[], int n){

    int j = 0;
    for(int i = 0; i<n; i++){
          if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
          }
    }
    cout << "Array after pushing zeroes to the end: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1,0,4,6,0,7,8,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    moveAllZeros(arr, n);
     return 0;
}