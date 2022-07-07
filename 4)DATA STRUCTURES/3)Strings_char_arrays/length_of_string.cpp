#include<iostream>
using namespace std;
//dont pass array lenght in char arrays
int getlength(char name[]){
   int count=0;
   
   for(int i=0;name[i]!='\0';i++){
       count++;
   }
   return count;

}

int main(){
    char name[20];
    cout<<"Name:"<<endl;
    cin>>name;
    cout<<getlength(name)<<endl;
}