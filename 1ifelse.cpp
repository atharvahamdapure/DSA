/*
HOMEWORK
if element belongs 
from lower case print lowercase , if element belongs 
from upper case print upper case in c++ and if element belongs from
numeric print numeric case
*/


#include<iostream>
using namespace std;

int main(){
    
    char element;
    cout<<"Enter character : "<<endl;
    cin>>element;

    if (islower(element) )
    {
        cout<<"This is a lowercase character ."<<endl;
    }
    else if (isupper(element) )
    {
        cout<<"This is a uppercase character ."<<endl;
    }
    else{
        cout<<"The entered character is numeric ."<<endl;
    }
    



    return 0;
}