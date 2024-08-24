#include<iostream>
using namespace std;


// bool isPrime( int n );

// int main(){

//     int n  = 65;
//     int ans = isPrime(n);
//     cout << "The number is Prime or not: :" << ans << endl;
//     return 0;
// }

// bool isPrime(int n){

//     if(n == 1) return false;

//     for(int i = 2; i * i <= n; i++) {
//         if(n % i == 0) return false;
//     }
//     return true;
// }
//Note
// 3.Therefore, if n is not a prime number, it must have at least one factor less than or equal to the square root of n.
// 4.
// By iterating from 2 to the square root of n (inclusive), we can check if n has any factors in this range. If we find any factor, then n is not a prime number.
// 5.
// By using the condition i * i <= n, we can optimize the loop by stopping the iteration when i becomes greater than the square root of n. This is because, if i is greater than the square root of n, then i * i would be greater than n, and we would have already checked all possible factors less than or equal to the square root of n.

bool isPrime(int n);

int main(){
    int n = 34;
    int ans = isPrime(n);
    cout << "The number " << n << " is: " << ans << endl;
    return 0;
}

bool isPrime(int n){
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i * i < 5; i = i + 6){
        if(n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}