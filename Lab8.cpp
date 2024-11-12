#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void removeSpaces(char* str)
{
    int count = 0;

    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i];
    str[count] = '\0';
}

int main()
{
    char str[100];
    cout << "Enter string: " << endl;
    cin.getline(str, 100);
    removeSpaces(str);
    sort(str, str + strlen(str));
    cout << "String without spaces: " << str;
    return 0;
}
