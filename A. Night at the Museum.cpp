#include <iostream>

using namespace std;

void    solve()
{
    string s;
    cin >> s;
    int x = 0;
    x = min(abs(s[0] - 'a'), (26 - abs(s[0] - 'a')));
    for (size_t i = 0; s[i + 1]; i++)
        x += min(abs(s[i] - s[i + 1]), (26 - abs(s[i] - s[i + 1])));
    cout << x << '\n';
}

int main (int argc, char *argv[])
{
    solve();
    return 0;
}
