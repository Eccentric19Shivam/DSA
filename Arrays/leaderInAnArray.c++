#include<iostream>
using namespace std;

int leader(int arr[], int n);

int main(){
    int arr[] = {7,10,4,3,6,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int prev_leader = leader(arr, n);
    cout << "Leaders: " << prev_leader << " ";
   
    for(int i = n-2; i >= 0; i--){
        int curr_leader = leader(arr, i+1);
        if(curr_leader != prev_leader){
            cout << curr_leader << " ";
            prev_leader = curr_leader;
        }
    }
    cout << endl;
    return 0;
}

int leader(int arr[], int n){

    int curr_leader = arr[n-1];
    return curr_leader;
    for(int i = n-2; i >=0; i--){
        if(arr[i] > curr_leader){
            curr_leader = arr[i];
        }
    }
    return curr_leader;
}