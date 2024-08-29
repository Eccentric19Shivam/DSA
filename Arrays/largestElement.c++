#include<iostream>
using namespace std;

int getLargest( int arr[], int n);

int main(){
    int arr[] = {5, 20, 10, 8, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = getLargest( arr, n);
    cout << result << endl;
    return 0;
}

int getLargest( int arr[], int n){
    int res = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > arr[res]){
            res = i;
        }
    }
    return arr[res];
}