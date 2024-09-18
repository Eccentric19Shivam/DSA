#include<iostream>
using namespace std;

int search(int arr[], int x, int n);

int main(){
    int arr[] = {10, 20, 30, 40, 50, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 30;

    int result = search(arr, x, n);
    cout << "The index of the desired element is: " << result << endl;
    return 0;
}//nice

int search(int arr[], int x, int n){
    int low = 0, high = n-1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == x) return mid;
        
        if(arr[low] < arr[mid]){
            if(arr[low] <= x && arr[mid] > x){
                high = mid - 1;
            }
            else low = mid + 1;
        }

        else{
            if(arr[mid] < x && arr[high] >= x){
                low = mid + 1;
            }
            else high = mid - 1;
        }
    }
    return -1;
}