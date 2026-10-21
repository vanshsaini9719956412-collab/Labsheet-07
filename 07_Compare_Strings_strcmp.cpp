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

    int result = strcmp(firstString, secondString);

    if (result == 0)
        cout << "Both strings are equal";
    else if (result < 0)
        cout << "First string comes before second string";
    else
        cout << "First string comes after second string";

    return 0;
}
