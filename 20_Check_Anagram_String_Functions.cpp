#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char firstString[300], secondString[300];
    int frequency1[256] = {0};
    int frequency2[256] = {0};

    cout << "Enter first string: ";
    cin.getline(firstString, 300);

    cout << "Enter second string: ";
    cin.getline(secondString, 300);

    // Count characters while ignoring spaces and letter case.
    for (int i = 0; i < strlen(firstString); i++)
    {
        unsigned char ch = firstString[i];
        if (!isspace(ch))
            frequency1[tolower(ch)]++;
    }

    for (int i = 0; i < strlen(secondString); i++)
    {
        unsigned char ch = secondString[i];
        if (!isspace(ch))
            frequency2[tolower(ch)]++;
    }

    bool isAnagram = true;

    for (int i = 0; i < 256; i++)
    {
        if (frequency1[i] != frequency2[i])
        {
            isAnagram = false;
            break;
        }
    }

    if (isAnagram)
        cout << "Strings are anagrams";
    else
        cout << "Strings are not anagrams";

    return 0;
}
