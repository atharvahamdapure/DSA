// Homework
// Sum of n even numbers 


#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter n : "<<endl;
    cin>>n;
    int sum = 0 ;

    for (int i = 2; i <= n; i = i + 2)
    {
        sum = sum + i ;
    }
    cout<<"Sum of "<<n<<" even numbers is "<<sum;



    return 0;
}

