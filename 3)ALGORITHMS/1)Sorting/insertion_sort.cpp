#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0 && temp<arr[j];j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
    }
}


void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
int arr[7]={221,2,3,11,11,54,13};
print(arr,7);
insertion_sort(arr,7);
print(arr,7);


}
