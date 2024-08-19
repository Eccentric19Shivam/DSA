#include<iostream>
using namespace std;


int countDigits(int n);
int main(){
    int n = 456;
    int count = countDigits(n);
    cout << "Number of digits in " << n << " is: " << count << endl;
    return 0;
}

int countDigits(int n){
    int count = 0;
    while(n!= 0){
        n /= 10;
        count++;
    }
    return count;
}