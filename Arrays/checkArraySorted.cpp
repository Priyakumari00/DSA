#include<iostream>
using namespace std;

bool isArraySorted(int arr[], int n){
     for(int i = 1; i<n; i++){
        if(arr[i] >= arr[i-1]){
          
        }else{
            return false;
        }
     }
     return true;
}

int main(){
    int arr[] = { 1, 2 ,8, 4 ,5 };
    int n = 5;
    if(isArraySorted(arr, 5)){
        cout<<"the array is sorted"<<endl;
    }else{
        cout<<"The array is not sorted";
    }
   
    return 0;
}