#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter number:  ";
    cin >> number;
    int arr[number];
    int largest = -100;

    for (int idx = 0; idx <= (number - 1); idx++)
    {
        cout << "Enter number:  ";
        cin >> arr[idx];
    }
    for (int idx = 0; idx <= (number - 1); idx++)
    {
        if (arr[idx] > largest)
        {
            largest = arr[idx];
        }
    }
    cout << "Largest is:  " << largest;
}