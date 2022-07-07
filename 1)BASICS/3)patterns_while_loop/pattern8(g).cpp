#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int count=0;
    while(i<=n){
        int j=1;
        count=i;
        while(j<=i){
            
            cout<<count++;
            j++;
        }
        cout<<endl;
        i++;
    }

}