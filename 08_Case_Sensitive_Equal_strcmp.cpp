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

    if (strcmp(firstString, secondString) == 0)
        cout << "Strings are equal (case-sensitive)";
    else
        cout << "Strings are not equal";

    return 0;
}
