#include <iostream>
using namespace std;

main()
{
    int arr[5];
    int sum = 0;
    for (int idx = 0; idx <= 4; idx++)
    {
        cout << "Enter number:  ";
        cin >> arr[idx];
        sum = sum + arr[idx];
    }
    cout << sum;
}