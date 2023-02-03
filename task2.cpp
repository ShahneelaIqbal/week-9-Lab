#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter number:  ";
    cin >> number;
    int arr[number];
    for (int x = 0; x <= (number - 1); x++)
    {
        cout << "Enter number:  ";
        cin >> arr[x];
    }
    for (int y = 0; y <= (number - 1); y++)
    {
        cout << arr[y] << " ";
    }
   
     
}
