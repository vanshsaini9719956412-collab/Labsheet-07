#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char firstString[400], secondString[200];

    cout << "Enter first string: ";
    cin.getline(firstString, 400);

    cout << "Enter second string: ";
    cin.getline(secondString, 200);

    strcat(firstString, secondString);

    cout << "Concatenated string = " << firstString;

    return 0;
}
