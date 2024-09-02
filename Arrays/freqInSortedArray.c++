#include<iostream>
using namespace std;

int printFreq(int arr[], int n);

int main(){
    int arr[] = {2, 2, 8, 8, 8, 10, 10, 10, 10, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = printFreq(arr, n);
    cout << res << endl;
    return 0;
} 


int printFreq(int arr[], int n){
    int freq = 1, i = 1;
    while(i < n){
        while(i < n && arr[i] == arr[i+1]){
            freq++;
            i++;
        }
        cout << arr[i-1] << " appears " << freq << " times\n";
        freq = 1;
        i++;
    }
    if(n == 1 || arr[n- 1] != arr[n - 2]){
        cout << arr[n-1] << " appears " << freq << " times\n";
    }
}