#include <iostream>
using namespace std;

main()
{
    string name;
    char letter;
    cout << "Enter name:  ";
    getline(cin, name);
    cout << "Enter a letter:  ";
    cin >> letter;
    int idx = 0;
    int count = 0;
    while (name[idx] != '\0')
    {
        count = count + 1;
        idx++;
    }
    if(name[idx - 1] == letter)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}