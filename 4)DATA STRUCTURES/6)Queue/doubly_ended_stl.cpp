#include<iostream>
#include<queue>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(12);
    d.push_front(15);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_front();
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_back();
    

}