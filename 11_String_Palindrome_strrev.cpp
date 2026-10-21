#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char text[200], original[200];

    cout << "Enter a string: ";
    cin.getline(text, 200);

    strcpy(original, text);

    // strrev() is not standard C++; perform the same reverse operation manually.
    int length = strlen(text);

    for (int i = 0; i < length / 2; i++)
    {
        char temp = text[i];
        text[i] = text[length - 1 - i];
        text[length - 1 - i] = temp;
    }

    if (strcmp(original, text) == 0)
        cout << "Palindrome string";
    else
        cout << "Not a palindrome string";

    return 0;
}
