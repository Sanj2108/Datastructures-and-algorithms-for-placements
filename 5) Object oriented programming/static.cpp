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
   static int timeTocomplete;
    
   static int random(){
       return timeTocomplete;
   }
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

int Hero::timeTocomplete=100;

int main(){
    cout<<Hero::timeTocomplete<<endl; 
    cout<<Hero::random()<<endl;
}