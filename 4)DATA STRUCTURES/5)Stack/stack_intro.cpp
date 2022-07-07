#include<iostream>
using namespace std;
//Stack uses LIFO ->last in first out
//stack using array
class Stack{
  public:
  //elements
  int size;
  int top;
  int *arr;

  //behaviour
 Stack(int size){
    this->size=size;
    top=-1;
    arr=new int[size];
 }

 void push(int element){
    if(size-top>1){
         top++;
         arr[top]=element;
     }
    else{
         cout<<"Stack overflow"<<endl;
     }
 }

 void pop(){
     if(top>=0){
        top--;
     }
     else{
         cout<<"Stack underflow"<<endl;
     }
 }

 int peek(){
   if(top!=-1){
       return arr[top];
   }
   else{
       cout<<"Stack is empty"<<endl;
       return -1;
   }
 }

 bool isEmpty(){
   if(top==-1){
       return true;
   }
   else{
       return false;
   }
 }

};

int main(){
    Stack st(5);
    st.push(2);
    st.push(22);
    st.push(3);
    st.push(33);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.isEmpty()<<endl;
    st.pop();

}