#include <iostream> 
#include <cstring>
 
void selectionSort(int arr[], int n);
void swap(char *xp, char *yp)
{
    char temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void solve()
{
	char	str[1000];
	int	n;
	int	c = 0;
	std::cin >> n;
	std::cin >> str;
	for (size_t i = 0; i < n; i += 1)
	{
		if (str[i] == str[i + 1])
			c++;	
	}
	std::cout << c << std::endl;
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