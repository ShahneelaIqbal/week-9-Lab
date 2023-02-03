#include <iostream>
using namespace std;

main()
{
    float due;
    cout << "Enter due amount:  ";
    cin >> due;
    float sum = 0;
    float amount[4];
    for (int idx = 0; idx <= 3; idx++)
    {
        if (idx == 0)
        {
            cout << "Enter amount quarter:  ";
            cin >> amount[idx];
        }
        if (idx == 1)
        {
            cout << "Enter amount dime:  ";
            cin >> amount[idx];
        }
        if (idx == 2)
        {
            cout << "Enter amount nickel:  ";
            cin >> amount[idx];
        }
        if (idx == 3)
        {
            cout << "Enter amount penny:  ";
            cin >> amount[idx];
        }
    }
    for (int idx = 0; idx <= 3; idx++)
    {
        if (idx == 0)
        {
            amount[idx] = amount[idx] * 0.25;
        }
        if (idx == 1)
        {
            amount[idx] = amount[idx] * 0.10;
        }
        if (idx == 2)
        {
            amount[idx] = amount[idx] * 0.05;
        }
        if (idx == 3)
        {
            amount[idx] = amount[idx] * 0.01;
        }
    }
    for (int idx = 0; idx <= 3; idx++)
    {
        sum = sum + amount[idx];
    }
    if (sum > due)
    {
        cout << "True";
    }
    if (sum < due)
    {
        cout << "False";
    }
}