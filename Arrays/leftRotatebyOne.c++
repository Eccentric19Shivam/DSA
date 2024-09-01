#include<iostream>
using namespace std;

int byOne(int arr[], int n);

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = byOne(arr,n);

    cout << "Modified array is :";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

int byOne(int arr[], int n){

    int temp = arr[0];
    for(int i = 1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr[n-1];
}