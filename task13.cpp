#include <iostream>
using namespace std;

main()
{
    string name;
    cout << "Enter name:  ";
    getline(cin, name);
    char letter;
    for (int idx = 0; idx < name.length(); idx++)
    {
        letter = name[idx];
        if (letter == 'a')
        {
            name[idx] = 'b';
        }
        if (letter == 'b')
        {
            name[idx] = 'c';
        }
        if (letter == 'c')
        {
            name[idx] = 'd';
        }
        if (letter == 'd')
        {
            name[idx] = 'e';
        }
        if (letter == 'e')
        {
            name[idx] = 'f';
        }
        if (letter == 'f')
        {
            name[idx] = 'g';
        }
        if (letter == 'g')
        {
            name[idx] = 'h';
        }
        if (letter == 'h')
        {
            name[idx] = 'i';
        }
        if (letter == 'i')
        {
            name[idx] = 'j';
        }
        if (letter == 'j')
        {
            name[idx] = 'k';
        }
        if (letter == 'k')
        {
            name[idx] = 'l';
        }
        if (letter == 'l')
        {
            name[idx] = 'm';
        }
        if (letter == 'm')
        {
            name[idx] = 'n';
        }
        if (letter == 'n')
        {
            name[idx] = 'o';
        }
        if (letter == 'o')
        {
            name[idx] = 'p';
        }
        if (letter == 'p')
        {
            name[idx] = 'q';
        }
        if (letter == 'q')
        {
            name[idx] = 'r';
        }
        if (letter == 'r')
        {
            name[idx] = 's';
        }
        if (letter == 's')
        {
            name[idx] = 't';
        }
        if (letter == 't')
        {
            name[idx] = 'u';
        }
        if (letter == 'u')
        {
            name[idx] = 'v';
        }
        if (letter == 'v')
        {
            name[idx] = 'w';
        }
        if (letter == 'w')
        {
            name[idx] = 'x';
        }
        if (letter == 'x')
        {
            name[idx] = 'y';
        }
        if (letter == 'y')
        {
            name[idx] = 'z';
        }
        if (letter == 'z')
        {
            name[idx] = 'a';
        }
        cout << name[idx];
    }
}