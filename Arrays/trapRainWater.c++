#include<iostream>
using namespace std;

int getWater(int arr[], int n);

int main(){
    int arr[] = {3, 0, 1, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = getWater(arr, n);
    cout << "The maximum amount of water that can be trapped is " << res << endl;
    return 0;
}

int getWater(int arr[], int n) {
    int res = 0;
    for(int i = 1; i< n - 1; i++){
        int lMax = arr[i];
        for(int j = 0; j < i; j++){
            lMax = max(lMax, arr[j]);
        }
        int rMax = arr[i];
        for(int j = i + 1; j < n; j++){
            rMax = max(rMax, arr[j]);
        }
        res = res + min(lMax, rMax) - arr[i];
    }
    return res;
}