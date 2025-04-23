#include<iostream>
#include<set>
using namespace std;

void removeDupliacteElement(int arr[], int n){
    set<int>uniqueSet;

    for(int i=0; i<n; i++){
        uniqueSet.insert(arr[i]);
    }
    cout << "Array after removing duplicates: ";
    for (int val : uniqueSet) {
        cout << val << " ";
    }
    cout << endl;
}


int main(){
    int arr[] = {1,2,3,3,4,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    removeDupliacteElement(arr, n);
     return 0;
}

