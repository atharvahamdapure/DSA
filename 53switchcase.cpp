// Switch case

#include <iostream>
using namespace std;

int main()
{

    int ch = '1';

    switch (ch)
    {
    case 1:
        cout << "First" << endl;
        break;

    case '1':
        cout << " Character one " << endl;
        break;

    default:
        cout << "It is default case ." << endl;
    }

    return 0;
}