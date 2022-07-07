#include<iostream>
using namespace std;
int main(){
      char name[20];
      cout<<"Enter name: "<<endl;
      cin>>name;  //cin stops taking input when you press
                  //space,tab,enter
      name[2]='\0'; //null character pe ruk jaata
      cout<<"Your name: ";
      cout<<name<<endl;
      

}