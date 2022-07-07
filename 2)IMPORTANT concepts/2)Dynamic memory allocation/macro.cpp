#include<iostream> 
using namespace std;
//a piece a code in a program that is replaced by value of macro
//at compile PI replace by 3.14
//cannot be changed
#define PI 3.14

int main() {

    int r = 5;
    //double pi = 3.14;

    double area = PI * r * r;

    cout << "Area is " << area << endl;

    return 0;
}