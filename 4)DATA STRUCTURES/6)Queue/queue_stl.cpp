#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(12);
    q.push(10);
    //push from rear
    cout<<q.front()<<endl;
    q.push(25);
    cout<<q.front()<<endl;
    //pop from front
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.back()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.size()<<endl;


}