#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;

    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            cout<<"The given number is not prime number "<<endl;
            break;
        }
        else if (n%i!=0)
        {
            cout<<"It is a prime number ."<<endl;
            break;
        } 
        
    }
    
    
    return 0;
}