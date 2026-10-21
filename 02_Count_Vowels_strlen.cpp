#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char text[200];
    int vowelCount = 0;

    cout << "Enter a string: ";
    cin.getline(text, 200);

    for (int i = 0; i < strlen(text); i++)
    {
        char ch = text[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowelCount++;
        }
    }

    cout << "Number of vowels = " << vowelCount;

    return 0;
}
