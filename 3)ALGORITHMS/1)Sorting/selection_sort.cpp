#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void selection(int arr[],int n){
 //smallest element at its right position
    for(int i=0;i<n-1;i++){
        //assume i pe minimun element hai
        int min=i;
        for(int j=i+1;j<n;j++){
             if(arr[min]>arr[j]){
                 min=j;
             }

        }
        swap(arr[min],arr[i]);
    }

}


int main(){
   int arr[7]={12,2,91,22,22,27,10};
   print(arr,7);
   selection(arr,7);
   print(arr,7);
   


}