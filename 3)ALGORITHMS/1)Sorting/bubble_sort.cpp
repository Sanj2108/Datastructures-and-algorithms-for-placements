#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    //put largest element at its right place
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            //already sorted
            break;
        }
    }
    
      


}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[7]={21,23,2,31,90,22,22};
print(arr,7);
cout<<endl;
bubble_sort(arr,7);
print(arr,7);
}