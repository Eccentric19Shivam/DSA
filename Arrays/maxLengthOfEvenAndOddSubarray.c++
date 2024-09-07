#include<iostream>
using namespace std;

int maxOddEven(int arr[], int n);

int main(){
    int arr[] = {10, 12, 14, 7, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = maxOddEven(arr, n);
    cout << "Maximum length of consecutive odd and even numbers: " << ans << endl;
    return 0;
};


int maxOddEven(int arr[], int n){
    int res = 1, curr = 1;
    for(int i = 1; i < n; i++){
        if((arr[i] % 2 == 0 && arr[i-1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i-1] % 2 == 0)){
            curr++;
            res = max(res, curr);
        }
        else curr = 1;
    }
    return res;
}