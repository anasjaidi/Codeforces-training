#include <iostream>
#include <ctype.h>
#include <cctype>

using namespace std ;


void    solve(void)
{
    int a , b , c = 0;
    cin >> a >> b;
    int  m;
    for (size_t i = 1; i <= 10; i++)
    {
        m = i * a - b;
        if (m % 10 == 0 || (i * a % 10 == 0))
        {
            c = i;
            break;
        }
    }
    
    cout << c << endl;
}

int main()
{
    solve();
}