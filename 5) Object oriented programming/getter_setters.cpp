#include<iostream>
using namespace std;
//manipulate private elements from outside
//getter and setter to access private elements from outside class
class Hero{
   //By default private    
   private:
   int health;

   public:
   char level;

   void print(){
       cout<<level<<endl;
   }

   int getHealth(){
       return health;
   }

   char getLevel(){
       return level;
   }

   void setHealth(int h){
       //conditions can be put in setters
       health=h;
   }

   void setLevel(char ch){
       level=ch;
   }
};

class empty{
    //empty class
};

int main(){
    //create an object
    Hero h1;
    Hero ramesh;
    
    ramesh.setHealth(70);
    
    ramesh.level='A';

    cout<<"health is :"<<ramesh.getHealth()<<endl;
    cout<<"level is :"<<ramesh.level<<endl;
}