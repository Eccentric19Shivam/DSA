#include<iostream>
using namespace std;

// int gcd(int x, int y);

// int main(){

//     int x = 12, y = 15;
//     int ans = gcd(x, y);
//     cout << "GCD of " << x << " and " << y << " is " << ans << endl;
//     return 0;
// }

// int gcd(int x, int y){

//     int res = min(x, y);
//     while( x % res != 0 || y % res != 0 ){
//         res--;
//     }
//     return res;
// }

int gcd(int x, int y);

int main(){

    int x = 12, y = 15;
    int ans = gcd(x, y);

    cout << "GCD of " << x << " and " << y << " is " << ans << endl;
    return 0;
}

int gcd(int x, int y){

    while( x != y ){
        if( x > y ){
            x = x - y;
        }
        else{
            y = y - x;
        }
    }
    return x;
}