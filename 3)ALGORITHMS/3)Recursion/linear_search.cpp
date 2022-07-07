#include<iostream>
using namespace std;

bool linearSearch(int arr[],int n,int key){
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    
    bool ans=linearSearch(arr+1,n-1,key);
    return ans;
}

int main(){
int n;
cout<<"Enter n and array"<<endl;
cin>>n;
int arr[10];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Enter key"<<endl;
int key;
cin>>key;

cout<<linearSearch(arr,n,key);
}