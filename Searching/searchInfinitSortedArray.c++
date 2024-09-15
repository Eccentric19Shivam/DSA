#include<iostream>
using namespace std;

int main(){ 
    // how can i write an infinite array
    return 0;
}

int search( int arr[], int x ){
    if(arr[0] == x) return 0;
    int i = 1;
    while(arr[i] < x){
        i = i * 2;
        if(arr[i] == x){
            return i;
        }
        return binarySearch(arr, x, i/2 + 1, i);
    }
}

int binarySearch(int arr[], int x, int low, int high){
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0, high= n-1;
    while(low < high){
        int mid = (low + high) / 2;
        if(arr[mid] == x) return mid;
        else if(arr[mid] > x) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}