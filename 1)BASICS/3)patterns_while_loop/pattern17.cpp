#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int star=n-i+1;
        int j=1;
        while(j<=star){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

}