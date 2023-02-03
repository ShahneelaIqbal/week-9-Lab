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
    if (count % 2 == 0)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}