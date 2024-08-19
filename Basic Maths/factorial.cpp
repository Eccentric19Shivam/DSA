#include<iostream>
using namespace std;

int fun(int n);

int main(){

    int n = 3;
    int ans = fun(n);

    cout << "The factorial of " << n << " is: " << ans << endl;

    return 0;
}

int fun(int n){
    if( n == 0 || n == 1 ){
        return 1;
    }
    return n * fun(n-1);
}