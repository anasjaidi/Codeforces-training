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
    long long n , x , sq;
    cin >> n;
    int c = 0;
    for (size_t i = 0; i < n; i++)
    {
        c = 0;
        cin >> x;
        map<int , int> hash;
        for (size_t j = 1; j * j <= x; j++)
        {
            if ((j * j <= x) && !hash[j * j])
            {
                c++;
                hash[j * j] = 1;
            }
            if ((j * j * j <= x) && (j != 1) &&  !hash[j * j * j])
            {
                c++;
                hash[j * j * j] = 1;
            }
        }
        cout << c << endl;
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