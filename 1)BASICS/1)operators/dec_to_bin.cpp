 #include<iostream>
#include<math.h>
using namespace std;
//for 1,2,3 to 123-->ans=(ans*10) + digit
//for 1,2,3 to 321-->ans=(digit*10^î)+ans

int main() {

    int n;
    cin >> n;


    int ans  = 0;
    int i = 0;
    while(n != 0 ) {

        int bit  = n & 1;

        ans = (bit * pow(10, i) ) + ans;

        n = n >> 1;
        i++;

    }

    cout<<" Answer is " << ans << endl;


}