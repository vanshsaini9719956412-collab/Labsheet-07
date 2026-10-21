#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char names[100][100], temp[100];
    int size;

    cout << "Enter number of strings: ";
    cin >> size;
    cin.ignore();

    cout << "Enter strings:" << endl;
    for (int i = 0; i < size; i++)
        cin.getline(names[i], 100);

    // Bubble sort using strcmp()
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    cout << "Alphabetical order:" << endl;
    for (int i = 0; i < size; i++)
        cout << names[i] << endl;

    return 0;
}
