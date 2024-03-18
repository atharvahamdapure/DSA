#include <bits/stdc++.h>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;

    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void Reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

bool checkPalindrome(char a[], int n)
{
    // Remain
    int s = 0;
    int e = n - 1;
    auto dt = typeid(a[s]).name();
    while (s <= e)
    {
        if (typeid(a[s]).name() != typeid(a[e]).name())
        {
            if (typeid(a[s]).name() != dt)
            {
                s++;
            }
            if (typeid(a[e]).name() != dt)
            {
                e--;
            }
        }
        else if (toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

char getMaxOccCharacter(string s){
    int arr[26] = {0};

    // Create an array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // Lowercase 
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    // Find maximum occ character 
    int maxi = -1 , ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
    
}

int main()
{
    // char name[20];
    // cout << "Enter your name : ";
    // cin >> name;
    // cout << "The length of string is : " << getLength(name) << endl;

    // Reverse(name, getLength(name));
    // cout << "Reverse : " << name;

    char st[10];
    cout << "Enter a string : ";
    cin >> st;
    // cout << checkPalindrome(st, getLength(st)) << endl;
    
    cout<<getMaxOccCharacter(st);

    // N2 i&nJA?a& jnI2n
    return 0;
}