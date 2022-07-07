#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int count=1;
        int first=n-i+1;
        while(first){
            cout<<count++;
            first--;
        }

        int star=(2*i)-2;
        while(star){
            cout<<"*";
            star--;
        }

        int third=n-i+1;
        while(third){
            cout<<--count;
            third--;
        }
        cout<<endl;
        i++;
    }
}

