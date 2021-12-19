#include <iostream> 
#include <cstring>
 
int	ft_strncmp(char *s1, char *s2)
{
	int	i;
 
	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return ((char)s1[i] - (char)s2[i]);
}
 
void solve()
{
	int i = 0, r;
	char	str1[1000];
	char	str2[1000];
	std::cin >> str1;
	std::cin >> str2;
	while (str1[i])
	{
		if (str1[i] >= 65 && str1[i] <= 90)
			str1[i] += 32;
		if (str2[i] >= 65 && str2[i] <= 90)
			str2[i] += 32;
		i++;
	}
	r = ft_strncmp(str1, str2);
	if (r > 0)
		std::cout << 1 << std::endl;
	else if (0 > r)
		std::cout << -1 << std::endl;
	else
		std::cout << 0 << std::endl;
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