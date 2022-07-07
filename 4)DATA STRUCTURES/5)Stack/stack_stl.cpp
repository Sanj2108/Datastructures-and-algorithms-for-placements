#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(1);
    s.push(3);
    s.push(5);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    s.pop();
    s.pop();
    cout<<s.empty()<<endl;

}