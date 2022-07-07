#include<iostream>
using namespace std;

int bin_search(int arr[],int n, int key)
{

    int start=0;
    int end=n-1;
      while(start<=end){
          int mid= start + (end - start)/2;
         if(arr[mid]==key){
             return mid;
         }
         
         else if(arr[mid]>key){
                end=mid-1;
         }

         else{
             start=mid+1;
         }

      }

      return -1;

}

int main()
{
    int n;
    cin >> n;
    int arr[20];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter key: ";
    cin >> key;
    int ans = bin_search(arr, n,key);
    if (ans == -1)
    {
        cout << "Key not found in array!" << endl;
    }

    else
    {
        cout << "Key found at index " << ans << endl;
    }
}