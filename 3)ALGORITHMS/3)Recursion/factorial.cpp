#include<iostream>
using namespace std;

int factorial(int n){

    //base case -->return likhna mandotary
    //if(n==0){return 1} bhi chalega
    
    if(n==0 || n==1){
        return 1;
    }
  return n*factorial(n-1);

}

int main(){
int n;
cout<<"Enter number : "<<endl;
cin>>n;
cout<<"Factorial is : "<<factorial(n)<<endl;


}