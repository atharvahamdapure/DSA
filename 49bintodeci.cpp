// Binary to decimal conversion

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    int answer = 0;
    int i = 0;
    cout << "Enter a decimal number : " << endl;
    cin >> n;

    while (n != 0)
    {
        int digit = n % 10 ;
        if (digit == 1)
        {
            answer = answer + pow(2,i);
        }
        n = n / 10;
        i++;
    }
    cout<<"The answer is : "<<answer<<endl;

    return 0;
}