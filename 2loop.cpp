/*
Sum of 'n' numbers 
*/

#include<iostream>
using namespace std;

int main(){
    /*
    IN WHILE LOOP 
    int n ;
    int i = 0;
    int sum = 0;
    cin>>n;
    while (i<=n)
    {
        cout<<i<<endl;
        sum = sum +i;
        i = i+1;
        
    }
    cout<<"The sum is : "<<sum<<endl;
    return 0;
    */

   // IN FOR LOOP
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;
    int sum = 0;
    for (int i = 0; i <= n ; i++)
    {
        sum = sum + i ;
    }
    cout<<"Sum is : "<<sum;


}