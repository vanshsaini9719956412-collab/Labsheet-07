#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char source[200], destination[6];

    cout << "Enter a string: ";
    cin.getline(source, 200);

    strncpy(destination, source, 5);
    destination[5] = '\0';

    cout << "First 5 characters = " << destination;

    return 0;
}
