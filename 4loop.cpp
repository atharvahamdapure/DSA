#include<iostream>
using namespace std;

int main(){
    float F , C;
    cout<<"Enter the temperature in fahrenheit ";
    cin>>F;

    C = (F-32)*5/9;
    cout<<"Temperature value in celcius : "<<C<<endl;
    return 0;
}