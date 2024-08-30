#include<iostream>
using namespace std;

int secondLargest(int arr[], int n);
int getLargest( int arr[], int n);
int secondLargest2(int arr[], int n);

int main(){
    int arr[] = { 20, 10, 20, 8, 12 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = secondLargest(arr, n);
    cout << res << endl;
    return 0;
}

int secondLargest(int arr[], int n){
 int largest = getLargest( arr, n );
 int res = -1;
 for(int i = 0; i< n; i++){
    if( arr[i] != arr[largest]){
        if( res == -1 ){
            res = i;
        }
        else if( arr [i] > arr[res]){
            res = i;
        }
    }
 }
 return arr[res];
}

int getLargest( int arr[], int n){
    int res = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > arr[res]){
            res = i;
        }
    }
    return res;
}

int secondLargest2(int arr[], int n){
    int res = -1, largest = 0;
    for( int i = 1; i < n; i++){
        
    }
}