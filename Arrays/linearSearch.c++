#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int target);

int main(){
    int arr[] = {1,2,32,3,4,5,6,7,8,};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter Your target: ";
    cin >> target;

    int result = linearSearch(arr, n, target);
    cout << "Your result: " << result << endl;
    return 0;
}

int linearSearch( int arr[], int n ,int target){
    for(int i = 0; i < n; i++){
        if(target == arr[i]){
            return true;
        }
    }
    return -1;
}