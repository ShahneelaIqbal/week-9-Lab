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

    int multiply;
    cout << "Enter another number to multiply:  ";
    cin >> multiply;

    for(int idx = 0; idx <= (number - 1); idx ++)
    {
        cout << "Product is:  " << arr[idx] * multiply << endl;
    }
}