#include <iostream>
using namespace std;
int getlength(char name[])
{
    int count = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

bool palindrome(char name[])
{
    int left = 0;
    int right = getlength(name) - 1;
    bool ans = true;
    while (left < right)
    {
        // if (name[left] != name[right])
        // {   this is basic case where case sensitive 
        //     return false;
        // }
        if (name[left] - name[right] == 0 || (name[left] - name[right] == 32 || name[left] - name[right] == -32)) 
            {

                left++;
                right--;
            }
        else{
            return false;
        }
    }
    return ans;
}

int main()
{
    char name[20];
    cout << "Enter name: " << endl;
    cin >> name;
    bool ans = palindrome(name);
    if (ans == true)
    {
        cout << "String is palindrome" << endl;
    }
    else
    {
        cout << "String is not palindrome" << endl;
    }
}