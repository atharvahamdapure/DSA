// Divide rs 1330 into notes of 100 , 50 , 20 and 1
// REMAIN
#include <iostream>
using namespace std;

int main()
{
    int amt = 1330;
    int temp ;
    int note;
    cin >> note;

    switch (note)
    {
    case 100:
        cout << amt / 100 << endl;
        cin >> note;
        
        // break;
    case 50:
        cout << amt / 50 << endl;
        cin >> note;
        // break;
    case 20:
        cout << amt / 20 << endl;
        cin >> note;
        // break;
    case 1:
        cout << amt / 1 << endl;
        cin >> note;
        // break;

    default:
        break;
    }

    return 0;
}