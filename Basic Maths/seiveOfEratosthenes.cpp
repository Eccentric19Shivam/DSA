#include<iostream>
#include<vector>
using namespace std;

// int printPrime(int n);
// bool isPrime(int n);

// int main(){
//     int n = 45;
//     printPrime(n);
//     return 0;
// }

bool isPrime(int n){
    if(n == 1) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i * i <= n; i = i + 6){
        if(n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// int printPrime(int n){
//     int count = 0;
//     for(int i = 2; i <= n; i++){
//         if(isPrime(i)){
//             cout << i << " ";
//             count++;
//         }
//     }
//     cout << endl;
//     return count;
// }

int seive (int n);

int main(){
    int n = 45;
    int ans = seive(n);
    cout << "Number of prime numbers: " << ans << endl;
    return 0;
}

int seive(int n){
    vector<bool> primes(n+1, true);
    primes[0] = primes[1] = false;
    for(int p = 2; p * p <= n; p++){
        if(primes[p]){
            for(int i = p * p; i <= n; i += p){
                primes[i] = false;
            }
        }
    }
    int count = 0;
    for(int i = 2; i <= n; i++){
        if(primes[i]){
            cout << i << " ";
            count++;
        }
    }
    cout << endl;
    return count;
}

