#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char text[300], result[300];
    int resultIndex = 0;

    cout << "Enter a string: ";
    cin.getline(text, 300);

    for (int i = 0; i < strlen(text); i++)
    {
        char ch = text[i];

        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
        {
            result[resultIndex++] = ch;
        }
    }

    result[resultIndex] = '\0';

    cout << "String without vowels = " << result;

    return 0;
}
