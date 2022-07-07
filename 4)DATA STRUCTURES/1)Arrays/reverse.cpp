#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
    cout << "Reversed array" << endl;
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
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
    cout << "Original array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    reverse(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}