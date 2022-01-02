#include <iostream> 
#include <cstring>
#include <string.h>
#include <cmath>
#include <vector>
#include <stdlib.h>
#include <map>
using namespace std;

void solve()
{
    int n , lenx , leny, ix , iy, d;
    cin >> n;
    char    x[100];
    char    y[100];
    char    r[100];
    for (size_t i = 0; i < n; i++)
    {
        cin >> x >> y;
        lenx = strlen(x) - 1;
        leny = strlen(y) - 1;
        for (size_t z = leny; z >= 0;)
        {
            iy = atoi(y + z);
            ix = x[leny] - 48;
            if (iy - ix < 0)
            {
                z--;
                iy = atoi(y + z);
                continue ;
            }
            else
            {
                r[d] = (iy - ix) + 48;
                d++;
                lenx--;
                y[z]= 0;
                z--;
            }
            if (z < 0)
                break;
        }
        r[d] = 0;
        cout << r;
    }
    
}
 
 
signed	main()
{
	int t;
	//std::cin >> t;
	t = 1;
	while (t--)
	{
		solve();
	}
}