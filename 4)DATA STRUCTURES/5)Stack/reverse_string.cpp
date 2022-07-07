#include<iostream>
#include<stack>
using namespace std;
int main(){
    //property of stack ->whatever you put in is reversed when you pop

    string str="kadak";
    stack<char> s;
    for(int i=0;i<str.length();i++){
        char temp=str[i];
        s.push(temp);
    } 

    string ans="";
    while(!s.empty()){
        char temp=s.top();
        ans.push_back(temp);
        s.pop();
    }

    cout<<"Reversed string :"<<ans<<endl;
}