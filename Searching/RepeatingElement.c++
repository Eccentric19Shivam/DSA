#include<iostream>
#include<algorithm>
using namespace std;

int repeatElement(int arr[], int n);
int repeatElement2(int arr[], int n);

int main(){
    int arr[] = {0, 2, 1, 3, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = repeatElement2(arr, n);
    cout << "The repeating element is: " << result << endl;
    return 0;
}

// O(n^2) solution
int repeatElement2(int arr[], int n) {
    for(int i = 0; i < n; i++){
        for(int j=i+1; j< n; j++) {
            if(arr[i] == arr[j])
                return arr[i];
        }
    }
}

// O(nlogn) solution
int repeatElement(int arr[], int n){
    sort(arr, arr+n);
    for(int i = 0; i < n; i++) {
        if(arr[i] == arr[i+1])
        return arr[i];
    }
}