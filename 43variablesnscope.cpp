#include<iostream>
using namespace std;

int main(){
    int a = 3;
    cout<< a <<endl;

    if(true){
        int a = 5;
        cout<< a <<endl;
    }
/* Here 'a' is printed different both the times because
 both the 'a' are in different scope which means different bracets */

    if (true)
    {
        int b = 9;
        cout<<b<<endl;
    }

    int b = 1;
    cout<<b<<endl; 
    
    int i = 2;
    for (int i = 6; i < 8; i++)
    {
        cout<<"hii"<<endl;
    }
     



    return 0;
}