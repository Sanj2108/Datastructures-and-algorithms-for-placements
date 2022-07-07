#include<iostream>
using namespace std;
//n=5-->5 4 3 2 1

// void print(int n){
//   if(n==0){
//       return;
//   }
 
//   cout<<n<<" ";
//   print(n-1);

// }

//n=5-->1 2 3 4 5

void print(int n){
    if(n==0){
        return;
    }

    print(n-1);
    cout<<n<<" ";
}


int main(){
int n;
cout<<"Enter n"<<endl;
cin>>n;
print(n);

}