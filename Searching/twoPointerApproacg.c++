#include<iostream>
using namespace std;

pair<int,int> twoPointer(int arr[], int n, int x);

int main(){
    int arr[] = {3, 5, 9, 2, 8, 10, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 34;
    pair<int,int> ans = twoPointer(arr, n, x);
    cout << "Ye le: " << ans.first << " " << "and" << " "<< ans.second << endl;
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