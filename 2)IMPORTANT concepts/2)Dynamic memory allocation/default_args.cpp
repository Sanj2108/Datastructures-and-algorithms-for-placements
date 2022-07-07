#include<iostream>
using namespace std;
//here start=0 -->if start value is not passed, assume start start =0 i.e default argument
//default arguements always start from rightmost argument i.e int n cannot be default unless start is also default argument 
void print(int arr[], int n  , int start = 0) {

    for(int i = start; i<n; i++) {
        cout << arr[i] << endl;
    }

}

int main() {

    int arr[5] = {1,4,7,8,9};
    int size = 5;

    print(arr, size);
    cout << endl;
    print(arr, size, 2);


    return 0;
}