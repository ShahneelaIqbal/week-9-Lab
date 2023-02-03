#include <iostream>
using namespace std;

main()
{
    int number;
    int sum = 0;
    cout << "Enter number:  ";
    cin >> number;
    int arr[number];
    for (int idx = 0; idx <= (number - 1); idx++)
    {
        cout << "Enter number:  ";
        cin >> arr[idx];
        sum = sum + arr[idx];

    }
    int average = sum / number;
    cout << "Sum is:  " << sum << endl;
    cout << "Average is:  " << average << endl;
}