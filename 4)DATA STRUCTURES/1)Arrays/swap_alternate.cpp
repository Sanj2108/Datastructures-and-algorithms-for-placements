#include <iostream>
using namespace std;

// input:  1 2 3 4 5 6 7 8 9 10
// output: 2 1 4 3 6 5 8 7 10 9

void alternate(int arr[], int n)
{
    int ptr = 0;
    while (ptr < n)
    {
        if (ptr + 1 < n)
        {
            swap(arr[ptr], arr[ptr + 1]);
            ptr = ptr + 2;
        }
    }
}

void swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int n;
    cin >> n;
    int arr[50];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    alternate(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}