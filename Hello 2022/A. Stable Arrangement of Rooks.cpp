#include <iostream>
#include <math.h>
using namespace std;

typedef class s_players {
public:
    int x ;
    int y;
} t_player;

void solve()
{
    int x, y, c = 0 , px, py, z = 0;
    cin >> x >> y;
    t_player player[y];
    for (size_t i = 0; i < x; i++)
    {
        for (size_t j = 0; j < x; j++)
        {
            if (z == y)
            {
                i = x + 1;
                break;
            }
            if (i == 0 && j == 0)
            {
                player[z].x = i;
                player[z].y = j;
                z++;
                continue;
            }
            px= (i - player[z - 1].x);
            py = (j - player[z - 1].y);
            if (px > 1 && py > 1)
            {
                player[z].x = i;
                player[z].y = j;
                z++;
            }
        }
        
    }
    if (z < y)
        cout << -1 << endl;
    else
    {
        z = 0;
        for (size_t i = 0; i < x; i++)
        {
            for (size_t j = 0; j < x; j++)
            {
                if (z < y && i == player[z].x && j == player[z].y)
                {
                    cout << 'R';
                    z++;
                }
                else
                    cout << '.';
            }
            cout << endl;
        }
        
    }
}

int main()
{
    int t ;
    cin >> t;
    while (t--)
        solve();
}