#include<iostream>
using namespace std;

// Method ONE: Native Method
// int trailZeros(int n);

// int main(){

//     int n = 10;
//     int ans = trailZeros(n);
//     cout << "The number of zeros is: " << ans << endl;
//     return 0;
// }

// int trailZeros(int n){

//     int fact = 1;
//     for(int i = 2; i <= n ; i++){
//         fact = fact * i;
//     }

//     int res = 0;
//     while( fact % 10 == 0 ){
//         fact /= 10;
//         res++;
//     }
//     return res;
// }

int countDigits(int n);

int main(){

    int n = 250;
    int ans = countDigits(n);
    cout << "The number: " << ans << endl;
    return 0;
}

int countDigits(int n){

    int res = 0;

    for(int i = 5; i <= n; i = i * 5){
        res = res + n/i;
    }
    return res;
}