#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char firstString[200], secondString[200];

    cout << "Enter first string: ";
    cin.getline(firstString, 200);

    cout << "Enter second string: ";
    cin.getline(secondString, 200);

    // strcpy() is used to copy the first string before comparison.
    char copiedString[200];
    strcpy(copiedString, firstString);

    if (strcmp(copiedString, secondString) == 0)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";

    return 0;
}
