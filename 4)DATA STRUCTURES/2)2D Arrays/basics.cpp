#include<iostream>
using namespace std;

int main(){
    int row=3;
    int col=4;
    int arr[row][col];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
   
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}