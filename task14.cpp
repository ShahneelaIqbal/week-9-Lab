#include <iostream>
using namespace std;

main()
{
    int number;
    float sum = 0;
    cout << "Enter number:  ";
    cin >> number;
    float arr[number];
    for (int idx = 0; idx <= (number - 1); idx++)
    {
        cout << "Enter number:  ";
        cin >> arr[idx];
        sum = sum + arr[idx];

    }
    cout << sum << " ohms";
}