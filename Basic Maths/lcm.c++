#include<iostream>
using namespace std;

// int lcm(int a, int b);

// int main(){

//     int a = 4, b = 6;
//     int ans = lcm(a, b);
//     cout << "The LCM of " << a << " and " << b << " is: " << ans << endl;
//     return 0;
// }

// int lcm(int a, int b){
//     int res = max(a, b);

//     while(a && b){
//         if(res % a == 0 && res % b == 0){
//             return res;
            
//         }
//         res++;
//     }
//     return res;
//}


int lcm(int a, int b);

int main(){

    int a = 4, b = 6;
    int ans = lcm(a, b);
    cout << "The LCM of " << a << " and " << b << " is: " << ans << endl;
    return 0;
}

int gcd( int a, int b ){
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
    
}

int lcm(int a, int b){
    return (a*b) / gcd(a, b);
}