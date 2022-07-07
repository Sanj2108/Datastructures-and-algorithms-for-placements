#include<iostream>
using namespace std;

class Hero{  
   private:
   int health;

   public:
   char level;
 //default constructor
   Hero(){
       cout<<"Default/simple constructor called"<<endl;
   }
   //this keyword is a pointer that points to current object
   //parameterised constructor
   Hero(int health,char level){
      this->health=health;
      this->level=level;
      cout<<"Parameterised constructor is called"<<endl;
   }

   //copy constructor
   //object copy karna cha raha hu
    Hero(Hero& temp){
        cout<<"Copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
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
       
       health=h;
   }

   void setLevel(char ch){
       level=ch;
   }
        //Destructor
        //Destructor called for static allocation only
    ~Hero(){
           cout<<"Destructor is called"<<endl;
       }
};


int main(){
    //create an object
    Hero h1;  //constructor called here
    Hero ramesh;  //constructor called here
    Hero h2(10,'B'); //for paramaterised constructor
    ramesh.setHealth(70);

    Hero suresh(70,'c');
    Hero ritesh(suresh);
    //ritesh.health=suresh.health
    //ritesh.level=suresh.level
    
    ramesh.level='A';

    cout<<"health is :"<<ramesh.getHealth()<<endl;
    cout<<"level is :"<<ramesh.level<<endl;
}