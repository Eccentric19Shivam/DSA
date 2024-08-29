#include<iostream>
using namespace std;

int insert(int arr[], int n, int x, int capacity, int pos);

int main() {
    int capacity = 10;
    int arr[capacity];
    int n = 5; // Current number of elements in the array

    // Initialize the array with some values
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Insert a new element at position 3
    int x = 100; // Element to insert
    int pos = 3; // Position to insert

    n = insert(arr, n, x, capacity, pos);

    // Print the updated array
    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

int insert(int arr[], int n, int x, int capacity, int pos){
    if(n == capacity){
        cout << "Array is full. Cannot insert." << endl;
        return n;
    }
    int index = pos - 1;
    for( int i = n-1; i >= index; i--){
        arr[i + 1] = arr[i];
    }
    arr[index] = x;
    return (n + 1);
}