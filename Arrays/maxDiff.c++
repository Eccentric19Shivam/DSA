#include<iostream>
using namespace std;

int maxDiff( int arr[], int n);
int maxDiff1( int arr[], int n);

int main(){
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = maxDiff1( arr, n);
    cout << res << endl;
    return 0;
}

int maxDiff( int arr[], int n){
    int res = arr[1] - arr[0];
    for( int i = 0; i < n; i++){
        for( int j  = i + 1; j < n; j++){
            res = max( res, arr[j] - arr[i]);
        }
    }
    return res;
}

int maxDiff1( int arr[], int n){
    int res = arr[1] - arr[0], minVal = arr[0];
    for( int j = 1; j < n; j++){
        res = max( res, arr[j] - minVal);
        minVal = min(minVal, arr[j]);
    }
    return res;
}