#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void    solve()
{
    int n;
    cin >> n ;
    int c = 0;
    int i;
    i = n % 3;
    if (!i)
        i = 2;
    while (c < n)
    {
        c += i;
        cout << i;
        if (i == 2)
            i = 1;
        else
            i++;
    }
    cout << endl;
}

int main()
{
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
        solve();
}