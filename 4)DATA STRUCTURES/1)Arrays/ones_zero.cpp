#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";

    }
}

void sorting(int arr[],int n){
  int left=0;
  int right=n-1;

  while(left<right){
          while(arr[left]==0 && left<right){
              left++;
          }

          while(arr[right]==1 && left<right){
              right--;
          }
         //Yaha tak pohocha matlab arr[left]=1 aur arr[right]=0 so swap
         if(left<right){
                swap(arr[left],arr[right]);
                left++;
                right--;
         }
         

  }
}


int main(){

    int n;
    cin>>n;
    int arr[20];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sorting(arr,n);
    print(arr,n);
      

}