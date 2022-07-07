#include<iostream>
using namespace std;

class Queue{
    int size;
    int *arr;
    int front;
    int rear;

    public:
    Queue(){
        int size=1000;
        arr=new int[size];
        front=0;
        rear=0;
    }

    bool isEmpty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }

    void enQueue(int data){
        //enqueue always from rear
        if(rear==size){
            cout<<"Queue is empty"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }

    int dequeue(){
        if(front==rear){
            //empty queue
            return -1;
        }
        else{
           int ans=arr[front];
           arr[front]=-1;
           front++;
           if(front==rear){
               //to avoid data wastage
               front=0;
               rear=0;
           }
           return ans;
        }
    }

     int frontElement(){
         if(front==rear){
             return -1;
         }
         else{
             return arr[front];
         }
     }

     int backElement(){
         if(front==rear){
             return -1;
         }
         else{
             cout<<rear<<endl;
             return arr[rear-1];
         }
     }
};

//all operations are done in O(1)
int main(){
  Queue q;
  q.enQueue(10);
  q.enQueue(18);
  q.enQueue(25);
  cout<<q.frontElement()<<endl;
  cout<<q.backElement()<<endl;
  q.dequeue();
  cout<<q.frontElement()<<endl;
  cout<<q.backElement()<<endl;
  q.enQueue(36);
  cout<<q.backElement()<<endl;
}
