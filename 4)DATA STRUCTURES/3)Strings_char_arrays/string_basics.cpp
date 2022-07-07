#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    s="Hello bro";
    s.push_back('x');
    cout<<s;

    cout<<endl;
    string t;
    cout<<"Enter t:"<<endl;
    getline(cin,t);
    cout<<t;
    cout<<endl;
    cout<<"Length of t: "<<t.length();
    cout<<endl;
    string x=s+t;
    cout<<x<<endl;
}