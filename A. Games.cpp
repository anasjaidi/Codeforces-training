#include <iostream>

using namespace std;

void    solve()
{
    int t;
    int c = 0;
    cin >> t;
    int team[t][2];
    for (size_t i = 0; i < t; i++)
        cin >> team[i][0] >> team[i][1];
    for (size_t i = 0; i < t - 1; i++)
    {
        for (size_t j = i + 1; j < t; j++)
        {
            if (team[i][0] == team[j][1])
                c++;
            if (team[i][1] == team[j][0])
                c++;
        }
        
    }
    cout << c << '\n';
}

int main()
{
    solve();
}