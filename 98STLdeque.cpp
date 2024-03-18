//  In simple language deque can be defined as array with power of inserting and deleting elements at both the ends.
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_front(4);
    d.push_back(5);
    d.push_front(6);

    for (auto i : d) 
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_back();
    d.pop_front();

    // cout << "After : " << endl;
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }


    d.erase(d.begin(), d.end() - 1);

    cout << "After : " << endl;

    for (auto i : d)
    {
        cout << i << " ";
    }

    return 0;
}