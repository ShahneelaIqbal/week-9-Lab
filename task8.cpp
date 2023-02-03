#include <iostream>
using namespace std;

main()
{
    string name;
    cout << "Enter name:  ";
    getline(cin, name);
    int idx = 0;
    while (name[idx] != '\0')
    {
        cout << "The character at index:  " << idx << "is " << name[idx] << endl;
        idx ++;
    }
}