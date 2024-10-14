#include<iostream>
using namespace std;

int findMajority(int arr, int n);
int findMajority2(int arr[], int n);

// Naive implementation
int findMajority(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) count++;
        }
        if(count >= n/2) return arr[i];
    }
    return -1;
}

// Moore's algorithm
int findMajority2(int arr[], int n){
    int count = 1;
    int res = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[res]) count++;
        else count--;

        if(count == 0){
            res = i;
            count = 1;
        }
    }

    count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == arr[res]) count++;
    }

    // Check if the majority element is indeed the majority
    if (count <= n / 2) {
        return -1;
    }

    return arr[res];
}

int main(){
    int arr[] = {8, 3, 4, 8, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = findMajority2(arr, n);
    cout << "The majority element in the array is " << result << endl;
    return 0;
}