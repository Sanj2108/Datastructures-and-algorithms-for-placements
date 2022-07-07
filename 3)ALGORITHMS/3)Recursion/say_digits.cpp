
//421-->four two one
//324-->three two four
#include<iostream>
using namespace std;
void sayDigits(int n){
string arr[10]={"Zero","one","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
if(n==0){
  return;
}

int out=n%10;
sayDigits(n/10);
cout<<arr[out]<<" ";


}

int main(){
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
 
    sayDigits(n);
}