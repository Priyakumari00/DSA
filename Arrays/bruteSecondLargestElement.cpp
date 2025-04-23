#include<iostream>
#include <algorithm> 
using namespace std;

int secondLargest(int arr[], int n){
    sort(arr, arr + n);

    int largest = arr[n-1];
    for(int i = n-2; i>=0; i--){
        if(arr[i] != largest){
            return arr[i];
        }
       
    }
    return -1;
}


int main(){
    int arr[] = { 24, 45,8, 36, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

   int result = secondLargest(arr,n);
   if(result != -1){
    cout<<"The second larget Element is "<<result;
   }
   else{
    cout<<"No second Largest element is found";
   }
   return 0;

}