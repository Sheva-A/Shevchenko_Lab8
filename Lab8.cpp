#include <iostream>
#include <cstring>
using namespace std;

void removeSpaces(char* str)
{
    int count = 0;

    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
            str[count++] = str[i];
    str[count] = '\0';
}

void sortString(char* str)
{
    int n = strlen(str);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (str[i] > str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main()
{
    char str[100];
    cout << "Enter string: " << endl;
    cin.getline(str, 100);
    removeSpaces(str);
    sortString(str);
    cout << "String without spaces: " << str;
    return 0;
}
