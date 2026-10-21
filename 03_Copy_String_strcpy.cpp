#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char source[200], destination[200];

    cout << "Enter a string: ";
    cin.getline(source, 200);

    strcpy(destination, source);

    cout << "Copied string = " << destination;

    return 0;
}
