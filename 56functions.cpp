// pow(a,b) using functions

#include <iostream>
using namespace std;

int power(int a, int b)
{
    int answer = 1;
    for (int i = 1; i <= b; i++)
    {
        answer = answer * a;
    }
    return answer;
}

int main()
{

    int a;
    cin >> a;
    int b;
    cin >> b;

    cout << power(a, b);

    return 0;
}