#include<iostream>
using namespace std;

int secondLargest(int arr[], int n){
    int largest = arr[0];

    for(int i = 0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    int second = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] !=largest && arr[i] > second){
            second = arr[i];
        }
    }
    return second;
}

int main(){
    int arr[] = {35, 76, 96, 45 ,34};
    int n = sizeof(arr) / sizeof(arr[0]);
    

    int result = secondLargest(arr, n);

    cout<<"The second largest element is "<<result;
}