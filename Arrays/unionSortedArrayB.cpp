#include<iostream>
#include <set>
using namespace std; 

void unionWithSet(int arr1[], int n1, int arr2[], int n2) {
    set<int> s; 

    for(int i = 0; i < n1; i++) {
        s.insert(arr1[i]);
    }

    for(int i = 0; i < n2; i++) {
        s.insert(arr2[i]);
    }

    cout << "Union of arrays using set: ";
    for(auto it : s) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    unionWithSet(arr1, n1, arr2, n2);
    return 0;
}
