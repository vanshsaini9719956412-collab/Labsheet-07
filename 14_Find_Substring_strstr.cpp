#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char text[300], substring[100];

    cout << "Enter main string: ";
    cin.getline(text, 300);

    cout << "Enter substring: ";
    cin.getline(substring, 100);

    char* result = strstr(text, substring);

    if (result != nullptr)
        cout << "Substring found at index " << (result - text);
    else
        cout << "Substring not found";

    return 0;
}
