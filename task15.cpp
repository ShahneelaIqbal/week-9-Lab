#include <iostream>
using namespace std;

main()
{
    int number[2];
    for (int idx = 0; idx < 2; idx++)
    {
        cout << "Enter number for array 1:  ";
        cin >> number[idx];
    }
    int count;
    cout << "Enter number for array 2:  ";
    cin >> count;
    int arr2[count];
    for (int idx = 0; idx < count; idx++)
    {
        cout << "Enter number:  ";
        cin >> arr2[idx];
    }
    for(int idx = 0; idx < count; idx++)
    {
        if(idx == 0)
        {
            cout << number[idx] << " ";
        }
        cout << arr2[idx] << " ";
        if(idx == count -1)
        {
            cout << number[1];
        }
    }
}
