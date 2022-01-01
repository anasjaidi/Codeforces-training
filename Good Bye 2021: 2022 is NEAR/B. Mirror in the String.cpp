#include  <iostream>
#include <map>
#include <string.h>
#include <stdlib.h>
 
using namespace std;
string ft_strcat(string dest, string src)
{
	int i;
	int j;
 
	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
 
char	*ft_strdup(string src)
{
	char	*new1;
	int		i;
	int		size;
 
	size = 0;
	while (src[size])
		++size;
	if (!(new1 = (char *)malloc(sizeof(char) * (size + 2))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		new1[i] = src[i];
		i++;
	}
	new1[i] = '\0';
	return (new1);
}
 
int smallest_alphabet(string a)
{
    char min = 'z';
    int min1;
    int i = -1;
    while (a[++i])  
        if (a[i] < a[i + 1])
            return i;
    return i;
}
int	ft_strcmp(char *s1, string s2)
{
	int i;
 
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
 
void    solve()
{
    int t , n , min;
    cin >> t;
    char t1[3];
    string str , temp;
    char *rstr;
    for (int i = 0; i < t ; i++)
    {
        cin >> n;
            cin >> str;
        t1[0] = str[0];
        t1[1] = str[0];
        t1[2] = 0;
        if (ft_strcmp(t1, str) <= 0)
        {
            cout << t1 << endl;
            continue ;
        }
        min = smallest_alphabet(str);
        rstr = ft_strdup(str);
        rstr[min + 1] = 0;
        temp = str.substr(0,min + 1);
        reverse(temp.begin(), temp.end());
        cout << rstr << temp<< endl ;
    }
 
}
int main(void)
{
    solve();
    return 0;
}