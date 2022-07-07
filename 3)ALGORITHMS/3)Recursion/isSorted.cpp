#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if(size==0 || size==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans=isSorted(arr+1,size-1);
         return ans;
    }

   
}


int main(){
    int n;
    cout<<"Enter n and array: "<<endl;
    cin>>n;
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<isSorted(arr,n);

}