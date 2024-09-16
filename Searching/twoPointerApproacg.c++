#include<iostream>
using namespace std;

pair<int,int> twoPointer(int arr[], int n, int x);
int twoPointer2(int arr[], int x, int n, int low, int high);

int main(){
    int arr[] = {2, 3, 5, 8, 9, 10, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 17;
    // int ans = twoPointer2(arr, x, n);
    // cout << "Ye le: " << ans << endl;
    return 0;
}

pair<int,int> twoPointer(int arr[], int n, int x){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == x){
                return make_pair(arr[i], arr[j]); 
            }
        }
    }
    return make_pair(-1, -1);
}

int tripleSum(int arr[], int n, int x){
    for(int i = 0; i< n; i++){
        twoPointer2(arr, i+1, n-1, x-arr[i], n);
    }
}

int twoPointer2(int arr[], int low, int high, int x, int n){
    int low = 0, high = n - 1;
    while( low <= high ){
        if( arr[low] + arr[high] == x) return low+high;
        else if( arr[low] + arr[high] > x) high--;
        else low++;
    }
    return 0;
}