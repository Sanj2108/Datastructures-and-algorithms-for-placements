#include<iostream>
using namespace std;

//used to reduce the function overhead
//if body of function is 1 line-->compiler accepts it as inline
//if body is 2 or 3 line-->depends on compiler to accepts
//if more than 3 compiler doesn't accept
//just like macro
//if inline-->function call replaced by that line before compilation
inline int getMax(int& a, int& b) {
    return (a>b) ? a : b;
}

int main() {

    int a = 1, b = 2;
    int ans = 0; 

    ans = getMax(a,b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a,b);
    cout << ans << endl;



    return 0;
}