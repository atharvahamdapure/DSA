// CHECK WHETHER PRIME OR NOT

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;
    int i;
    bool isPrime = 1;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime == 0;
            break;
        }
        
    }
    if (isPrime == 0)
    {
        cout<<"Not a prime number "<<endl;

    }
    else{
        cout<<"It is a prime number "<<endl;
    }
    

    return 0;
}



// METHOD 2
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n : " << endl;
//     cin >> n;
//     int i;
//     for (i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "Not a prime number " << endl;
//             break;
//         }
//         else
//         {
//             cout << "Prime number." << endl;
//             break;
//         }
//     }

//     return 0;
// }