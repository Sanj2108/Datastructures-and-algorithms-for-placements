#include<iostream>
using namespace std;

int partition(int *arr,int s,int e){
    //pivot you can take e also 
    int pivot=arr[s];
    //how many number less than pivot
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]); //here dont put pivot instead of arr[s]

    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }

  return pivotIndex;
}

void quickSort(int *arr,int s,int e){
    if(s>=e){
        return;
    }

    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main(){
int arr[10]={221,2,3,11,11,54,13,1,32,51};

quickSort(arr,0,9);

for(int i=0;i<10;i++){
     cout<<arr[i]<<" ";

}

}