#include<iostream>
//#include "other_file.cpp" --> to include class from other file
using namespace std;

//class keyword
class Hero{
    //properties
   int health;
   char level;
};

class empty{
    //empty class
};

int main(){
    //create an object
    Hero h1;
    //cout<<sizeof(h1)<<endl;
    empty e1;
    //cout<<sizeof(e1); //size 1 byte is assigned to empty class
    Hero ramesh;
       
}