#include <iostream>
#include <ctype.h>
#include <cctype>

using namespace std ;

void    solve(void)
{
    int c = 0, re = 0, n , i , m , r = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> m;
        if (m < 0 && !re)
            r++;
        else if (m < 0 && re)
            re--;
        else if (m > 0)
            re = re + m;
    }
    
    cout << r << endl;
}

int main()
{
    solve();
}