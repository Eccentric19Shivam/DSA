#include<iostream>
using namespace std;

int getPeak(int arr[], int n);

int main(){
    int arr[] = {5, 10, 20, 15, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = getPeak(arr,n);
    cout << "Ye le: " << ans << endl;
    return 0;
}

int getPeak(int arr[], int n){
    if(n == 1) return arr[0];
    if(arr[0] > arr[1]) return arr[0];
    if(arr[n-1] > arr[n-1]) return arr[n-1];
    
    for(int i = 1; i<n-1; i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            return arr[i];
        }
    }
}