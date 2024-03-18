/*
    Draw this pattern
    
    D
    C D
    B C D 
    A B C D 

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while (row<=n)
    {
        int col = 1;
        while (col<=row)
        {
            char ch = 'D' - (row - col); 
            cout<<ch<<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;

        
    }
    
    return 0;
}