#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char text[200], searchCharacter;

    cout << "Enter a string: ";
    cin.getline(text, 200);

    cout << "Enter character to find: ";
    cin >> searchCharacter;

    char* result = strchr(text, searchCharacter);

    if (result != nullptr)
        cout << "First occurrence found at index " << (result - text);
    else
        cout << "Character not found";

    return 0;
}
