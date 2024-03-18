/*
    Draw pattern 
    A 
    B C
    D E F
    G H I F

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char character = 'A';
    int row = 1;
    while (row<=n)
    {
        int col = 1;
        while (col<=row)
        {
            cout<<character<<" ";
            col = col + 1;
            character++;
        }
        cout<<endl;
        row = row + 1;
        
    }
    
    
    return 0;
}