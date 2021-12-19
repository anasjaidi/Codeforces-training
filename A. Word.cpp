#include <iostream>
#include <ctype.h>
#include <cctype>

using namespace std ;

void    solve(void)
{
    string str;
    int c = 0;
    cin >> str;
    for (size_t i = 0; str[i]; i++)
        if (isupper(str[i]))
            c++;
    if (c > str.length() / 2)
        for (size_t i = 0; str[i]; i++)
            str[i] = toupper(str[i]);
    else
        for (size_t i = 0; str[i]; i++) 
           str[i] = tolower(str[i]);
    cout << str << endl;
}

int main()
{
    solve();
}