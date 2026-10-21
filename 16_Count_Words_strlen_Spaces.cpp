#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char text[500];
    int wordCount = 0;
    bool insideWord = false;

    cout << "Enter a string: ";
    cin.getline(text, 500);

    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] != ' ' && !insideWord)
        {
            wordCount++;
            insideWord = true;
        }
        else if (text[i] == ' ')
        {
            insideWord = false;
        }
    }

    cout << "Number of words = " << wordCount;

    return 0;
}
