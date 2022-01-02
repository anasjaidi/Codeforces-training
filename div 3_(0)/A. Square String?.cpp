#include <iostream> 
#include <cstring>
#include <string.h>
 using namespace std;
int	ft_strcmp(string    s1, string s2)
{
	int	i;
 
	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return ((char)s1[i] - (char)s2[i]);
}
 
void solve()
{
	int n, h , i = 0, j = 0 , len;
    char    str[101] = {0};
    char    s[101] = {0};
    cin >> n;
    
    for (size_t x = 0; x < n; x++)
    {
        cin >> str;
        len = strlen(str);
        if (len & 1)
            cout << "NO" << endl;
        else 
        {
            h = len / 2;
            j = 0;
            for (i = h; str[i]; i++)
            {  
                s[j] = str[i];
                j++;
            }
            s[j] = 0;
            str[h] = 0;
            if (!(ft_strcmp(s, str)))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
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