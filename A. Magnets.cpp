#include <iostream>
#include <ctype.h>
#include <cctype>
#include <vector>

using namespace std ;

void    solve(void)
{
    int c = 1;
    int n;
    cin >> n;
    vector<int> arr(n,0);
    for (size_t i = 0; i < n; i++)
        cin >> arr[i];
    for (size_t i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            c++;
    cout << c << endl;
}

int main()
{
    solve();
}