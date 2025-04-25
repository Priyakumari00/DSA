#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int num){

    for(int i = 0; i<n; i++){
        if(arr[i] == num){
            return arr[i];
        }
    }
   
}

int main(){
    int arr[] = { 1, 3, 5, 6,7};
    int num = 3;
    int n = sizeof(arr)/sizeof(arr[0]);

   int result =  linearSearch(arr, n, 3);

   if(result !=-1){
    cout<<num;
   }else{
    result -1;
   }


}