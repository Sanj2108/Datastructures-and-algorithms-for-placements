#include<iostream>
using namespace std;

int sum(int arr[],int n){
   if(n==0){
       return 0;
   }
   if(n==1){
       return arr[0];
   }
   
   int remainingPart=sum(arr+1,n-1);
   int ans=arr[0]+remainingPart;
   
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

    cout<<"Sum is "<<sum(arr,n);
}