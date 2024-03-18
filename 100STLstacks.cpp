// Last in first out

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("Atharva");
    s.push("Prajwal");
    s.push("Pratik");

    cout << "Before pop element on top: ";
    cout << s.top() << endl;
    s.pop();

    cout << "After pop on top: ";
    cout << s.top();

    return 0;
}