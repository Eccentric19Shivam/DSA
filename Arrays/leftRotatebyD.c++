#include<iostream>
using namespace std;

int leftRotatebbyOne(int arr[], int n);
int leftRotatebyD(int arr[], int n, int d);

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    int ans = leftRotatebyD(arr,n, d);

    cout << "the new arr is :";
    for( int i = 0; i < n; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

int leftRotatebbyOne(int arr[], int n){
    int x= arr[0];
    for(int i = 1; i < n; i++){
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = x;
    return arr[n - 1];
}

int leftRotatebyD(int arr[], int n, int d){
    
        for(int i = 0; i < d; i++){
            leftRotatebbyOne(arr, n);
        }

}