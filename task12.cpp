#include <iostream>
using namespace std;

main()
{
    string name;
    cout << "Enter name:  ";
    getline(cin, name);
    int idx = 0;
    int count = 0;
    while(name[idx] != '\0')
    {
        if (name[idx] == 'a' || name[idx] == 'e' || name[idx] == 'i' || name[idx] == 'o' || name[idx] == 'u')
        {
            count = count + 1;
        }
        idx++;
    }
    cout << count;
}