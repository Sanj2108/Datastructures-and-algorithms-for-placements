#include<iostream>
using namespace std;

class Hero{
   //By default private    
   public:
   int health;
   char level;

   void print(){
       cout<<level<<endl;
   }
};

class empty{
    //empty class
};

int main(){
    //create an object
    Hero h1;
    Hero ramesh;
    
    ramesh.health=70;
    ramesh.level='A';

    cout<<"health is :"<<ramesh.health<<endl;
    cout<<"level is :"<<ramesh.level<<endl;
}