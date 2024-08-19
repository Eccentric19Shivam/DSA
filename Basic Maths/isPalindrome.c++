#include<iostream>
using namespace std;

bool isPalindrome(int n);

int main(){
    int n = 456;
    int ans = isPalindrome(n);

    cout << "Is the number a palindrome: " << ans << endl;

    return 0;
}

bool isPalindrome(int n){
    int temp = n, rev = 0;

    while( temp != 0){
        int last = temp % 10;
        rev = rev * 10 + last;
        temp = temp / 10;
    }
    if ( rev == n ){
        return 1;
    }
    return 0;
}