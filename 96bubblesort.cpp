#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void bubblesort(vector<int> arr)
{
    int i ;
    for (i = 1; i < arr.size(); i++)
    {

        for (int j = 0; j < arr.size() - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout<<i<<endl;
    print(arr);
}

int main()
{
    vector<int> arr = {8, 22, 7, 9, 31, 5, 13};
    bubblesort(arr);

    return 0;
}