#include <iostream>
#include <ctype.h>
#include <cctype>

using namespace std ;

void    solve(void)
{
    int c = 0, n, r = 0;
    int arr[5] = {0};
    string str;
    for (size_t i = 1; i < 5; i++)
        cin  >> arr[i];
    cin >> str;
    for (size_t i = 0; str[i]; i++)
        r += arr[str[i] - 48];
    cout << r << endl;
}

int main()
{
    solve();
}