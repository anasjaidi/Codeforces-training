#include <iostream>
using namespace std;

void    solve()
{
    string s, t;
    cin >> s >> t;
    int i, j;
    for (i = 0,  j = 0; s[i], t[j];)
    {
        if (s[i] == t[j])
            i++;
        j++;
    }
    cout << i + 1 << '\n';
}

int main()
{
    solve();
}