#include<iostream>
#include<vector>
using namespace std;
int main(){
    //dynamic array
    //doubles everytime vector is full
    vector<int> v;
    vector<int> a[5,1];
    vector<int> last(a);

    cout<<"memory:"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"memory:"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"memory:"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"memory:"<<v.capacity()<<endl;

    cout<<"Size"<<v.size()<<endl;
    cout<<"Front"<<v.front()<<endl;
    cout<<"back"<<v.back()<<endl;

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();

     for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.clear();
    
      for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;


}