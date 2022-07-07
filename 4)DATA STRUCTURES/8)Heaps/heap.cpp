#include<iostream>
using namespace std;

class heap{
  public:
    int arr[100];
    int size;

     heap(){
         //we are not using 0th index for heap
         arr[0]=-1;
         size=0;

     }

     //max heap
     //insertion O(logn)
     void insert(int val){
         size=size+1;
         int index=size;
         arr[index]=val;  //insert at end
        
        //take it to right positon
         while(index>1){
             int parent=index/2;
             //check its less then parent else swap
             if(arr[parent]<arr[index]){
                 swap(arr[parent],arr[index]);
                 index=parent;
             }
             else{
                 return;
             }
         }
     }
    
    //deletion->O(logn)
     void deletion(){
         //we delete root node in deletion              
         if(size==0){
             cout<<"nothing to delete"<<endl;
             return ;
         }
        //basically we copy last node in root node
         arr[1]=arr[size];

         //delete last node
         size--;

         //put root at right place
         int i=1;
         while(i<size){
             int leftIndex=2*i;
             int rightIndex=2*i + 1;

             if(leftIndex<size && arr[i]<arr[leftIndex]){
                 swap(arr[i],arr[leftIndex]);
                 i=leftIndex;
             }
             else if(rightIndex<size && arr[i]<arr[rightIndex]){
                 swap(arr[i],arr[rightIndex]);
                 i=rightIndex;
             }
             else{
                  return;
             }
         }

     }

     void print(){
         for(int i=1;i<=size;i++){
             cout<<arr[i]<<" ";
         } 
         cout<<endl;
     }
};

//O(logn)
void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    
    if(left<=n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<=n && arr[largest]<arr[right]){
        largest=right;
    }
     
     //agar update hua hai toh->sahi jagah par nhi
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

int main(){
//complete Binary tree
//heap order property
//A complete binary tree is a binary tree in which all the levels are completely filled except possibly the lowest one, which is filled from the left. 
//A complete binary tree is just like a full binary tree, but with two major differences. 
//All the leaf elements must lean towards the left

//heap order property->min. heap->parent is smaller than child,max. heap->parent is greater than child
 
heap h;
h.insert(50);
h.insert(55);
h.insert(53);
h.insert(52);
h.insert(54);
h.print();
h.deletion();
h.print();
int arr[6]={-1,54,53,55,52,50};
int n=5;
//n/2 because after that all leaf nodes are there and they are already heap
//O(nlogn)
for(int i=n/2;i>0;i--){
    heapify(arr,n,i);
}
cout<<"after heapify:"<<endl;
for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

}