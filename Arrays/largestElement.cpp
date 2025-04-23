#include<iostream>
using namespace std;

int largestElement(int arr[], int n){
    int largest = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
        
    }
    return largest;
}

int main(){
    int arr[] = {1,5,4,7,9,3};
    int n = 6;
    int max = largestElement(arr, 6);
    cout<<"The largest Element is " <<max;
}
