// Mini Calculator

#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    char op;
    cin >> op;
    int b;
    cin >> b;

    switch (op)
    {
    case '*':
        cout << "The product is : " << a * b << endl;
        break;
    case '+':
        cout << "The addition is : " << a + b << endl;
        break;
    case '-':
        cout << "The difference is : " << a - b << endl;
        break;
    case '/':
        cout << "The division is : " << a / b << endl;
        break;

    default:
        break;
    }

    return 0;
}