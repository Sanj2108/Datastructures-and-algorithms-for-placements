#include<iostream>
using namespace std;

bool binSearch(int arr[],int s,int e,int key){
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;

    if(arr[mid]==key){
        return true;
    }
    else if(arr[mid]>key){
       return binSearch(arr,s,mid-1,key);
    }
    else{
       return binSearch(arr,mid+1,e,key);
    }

}

int main(){
int n;
cout<<"Enter n and sorted array"<<endl;
cin>>n;
int arr[10];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Enter key"<<endl;
int key;
cin>>key;

cout<<binSearch(arr,0,n-1,key);
}