#include<iostream>
//#include<bits/std++.h>
#include<queue>
using namespace std;

int main(){
    //this is max heap
priority_queue<int> pq;
pq.push(4);
pq.push(3);
pq.push(5);
pq.push(2);
cout<<"max element:"<<pq.top()<<endl;
pq.pop();
cout<<"max element:"<<pq.top()<<endl;
cout<<pq.size()<<endl;

//this is min heap
priority_queue<int,vector<int>,greater<int>> pq1;
pq1.push(14);
pq1.push(13);
pq1.push(15);
pq1.push(12);
pq1.push(11);
cout<<"min element:"<<pq1.top()<<endl;
pq1.pop();
cout<<"min element:"<<pq1.top()<<endl;
cout<<pq1.size()<<endl;
}