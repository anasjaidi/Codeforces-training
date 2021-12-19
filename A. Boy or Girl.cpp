#include <iostream> 
#include <cstring>

using namespace std;

int	check(string str, char c, int p)
{
	for (size_t i = 0; i < p; i++)
		if (c == str[i])
			return 0;
	return 1;
}

void solve()
{
    string str;
    cin >> str;
	int c = 0;
	char hash[256];
	for (size_t i = 0; str[i]; i++)
		if (check(str,str[i],i))
			c++;
	if (c  & 1)
		cout << "IGNORE HIM!" << endl;
	else 
		cout << "CHAT WITH HER!"  << endl;
    
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