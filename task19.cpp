#include <iostream>
using namespace std;

main()
{
    string sentence;
    char vowels[6] = {'a', 'e', 'i', 'o', 'u', '\0'};
    cout << "Enter a sentence:  ";
    getline(cin, sentence);
    for (int idx = 0; idx < sentence.length(); idx++)
    {
        if (sentence[idx] == vowels[0] || sentence[idx] == vowels[1] || sentence[idx] == vowels[2] || sentence[idx] == vowels[3] || sentence[idx] == vowels[4])
        {
            cout << "";
        }
        else
        {
            cout << sentence[idx];
        }
    }
}