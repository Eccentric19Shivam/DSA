#include<iostream>
using namespace std;

// Function declaration (prototype)
int fun(int n);

int main() {
    int n = 5;
    int result = fun(n);
    cout << "Result: " << result << endl;
    return 0;  // Add a return statement
}

int fun(int n) {
    if (n <= 0) return 0;
    return n + fun(n - 1);
}