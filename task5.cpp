#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter number:  ";
    cin >> number;
    int arr[number];

    for (int idx = 0; idx <= (number - 1); idx++)
    {
        cout << "Enter number:  ";
        cin >> arr[idx];
    }

    int search;
    cout << "Enter another number to find:  ";
    cin >> search;
    bool flag;

    for (int idx = 0; idx <= (number - 1); idx++)
    {
        if (arr[idx] == search)
        {
            flag = true;
        }
    }

    if (flag == true)
    {
        cout << "Number found";
    }
    else
    {
        cout << "Number not found";
    }
}