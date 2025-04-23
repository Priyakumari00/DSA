#include<iostream>
// #include<math.c>
using namespace std;

int secondLargest(int arr[], int n){
    int largest = arr[0];
    int slargest = -1;

    for(int i = 1; i<n; i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }else if(arr[i] > slargest && arr[i] != largest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int main(){
    int arr[] = { 23, 56, 78, 43, 55};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int result = secondLargest(arr, n);


    if(result != -1){
        cout<<"the second largest element is "<<result;
    }
    else{
        cout<<"No second largest element is found "<<endl;
    }
    return 0;
}