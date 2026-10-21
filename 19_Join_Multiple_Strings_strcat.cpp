#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char sentence[500] = "";
    char word[100];
    int numberOfStrings;

    cout << "How many strings do you want to join? ";
    cin >> numberOfStrings;
    cin.ignore();

    for (int i = 0; i < numberOfStrings; i++)
    {
        cout << "Enter string " << i + 1 << ": ";
        cin.getline(word, 100);

        if (i > 0)
            strcat(sentence, " ");

        strcat(sentence, word);
    }

    cout << "Joined sentence = " << sentence;

    return 0;
}
