#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter number:  ";
    cin >> number;
    int arr[number];
    for (int idx = 0; idx <=(number - 1); idx++)
    {
        cout << "Enter number:  ";
        cin >> arr[idx];
    }
    for (int idx = (number - 1); idx >= 0; idx--)
    {
        cout << arr[idx] << " ";
    }
    
}