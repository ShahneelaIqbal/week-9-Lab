#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter number:  ";
    cin >> number;
    int arr[number];
    int smallest = 10000;

    for (int idx = 0; idx <= (number - 1); idx++)
    {
        cout << "Enter number:  ";
        cin >> arr[idx];
    }
    for (int idx = 0; idx <= (number - 1); idx++)
    {
        if (arr[idx] < smallest)
        {
            smallest = arr[idx];
        }
    }
    cout << "Smallest is:  " << smallest;
}