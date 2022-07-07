#include<iostream>
using namespace std;
int getlength(char name[]){
   int count=0;
   
   for(int i=0;name[i]!='\0';i++){
       count++;
   }
   return count;

}


void reverse(char name[]){
      int left=0;
      int right=getlength(name)-1;

      while(left<right){
          char temp=name[left];
          name[left]=name[right];
          name[right]=temp;
          left++;
          right--;
      }


}


int main(){
     char name[20];
     cout<<"Enter name: "<<endl;
     cin>>name;
     reverse(name);
     cout<<"Reversed name is: "<<name<<endl;

}