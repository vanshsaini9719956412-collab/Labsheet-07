#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char text[200];

    cout << "Enter a string: ";
    cin.getline(text, 200);

    cout << "Length = " << strlen(text);

    return 0;
}
