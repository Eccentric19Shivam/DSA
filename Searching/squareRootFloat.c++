#include<iostream>
using namespace std;

int squareRootFloat( int x );
int sqRootFloat( int x );

int main(){
    int x = 9;
    int ans = sqRootFloat(x);
    cout << x << ": " << ans << endl;    
    return 0;
}

int squareRootFloat( int x ){
    int i = 1;
    while( i * i <= x ){
        i++;
    }
    return i-1;
}

int sqRootFloat( int x ){
    int low = 0, high = x, ans = -1;
    while( low <= high ){
        int mid = (low + high) / 2;
        int mSq = mid * mid;
        if( x == mSq ){
            return mid;   
        }
        else if( x < mSq ){
            high = mid - 1;
        }
        else {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}