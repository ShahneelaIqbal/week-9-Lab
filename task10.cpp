#include <iostream>
using namespace std;

main()
{
    string name;
    cout << "Enter name:  ";
    getline(cin, name);
    int idx = 0;
    int count = 0;
    while (name[idx] != '\0')
    {
        count = count + 1;
        idx++;
    }
    for (int idx = (count - 1); idx >= 0; idx--)
    {
        cout << name[idx] << " ";
    }
}