#include<iostream>
using namespace std;

int isFeasible(int arr[], int n, int k, int ans);
int minPages(int arr[], int n, int k);

int main(){
    int k = 2;
    int arr[] = {10, 20, 10, 30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = minPages(arr, n, k);
    cout << "The answer is " << ans << endl;

    return 0;
}

int isFeasible(int arr[], int n, int k, int ans) {
    int sum = 0, req = 1;
    for(int i = 0; i < n; i++) {
        if(sum + arr[i] > ans){
            req++;
            sum = arr[i];
        }
        else {
            sum += arr[i];
        }
    }
    return (req <= k);
}

int minPages(int arr[], int n, int k) {
    int sum = 0, mx = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        mx = max(mx, arr[i]);
    }

    int low = mx, high = sum, res = 0;

    while(low <= high) {
        int mid  =(low + high) / 2;
        
        if(isFeasible(arr, n, k, mid)){
            res = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return res;
}
