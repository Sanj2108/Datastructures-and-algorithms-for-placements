#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
while(i<=n){
    int space=n-i;
    while(space){
        cout<<" ";
        space--;
    }

    int count=i;
    while(count){
    cout<<count--;

    }
     int next=2;
     int third=i-1;
     while(third){
         cout<<next++;
         third--;
     }
     cout<<endl;
     i++;

}

}