/*
    Draw pattern 
    A B C
    D E F
    G H I

*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    char ch = 'A';
    int row = 1;
    while (row<=n)
    {
        int col = 1;
        while (col<=n)
        {
            cout<<ch<<" ";
            ch = ch + 1; 
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
        
        
    }
    
    return 0;
}