#include  <iostream>
#include <map>


using namespace std;

void    solve()
{
    int t , n;
    cin >> t;
    int arr;
    map<int, char> map1;
    for (int i = 0; i < t ; i++)
    {
        cin >> n;
        for (size_t j = 0; j < n; j++)
        {
            cin >> arr;
            if (!map1[arr])
                map1[arr] = 1;
            else if (map1[arr] && !(map1[-arr]) && (arr))
                map1[-arr] = 1;
        }
        cout << map1.size() << endl;
        map1.clear();
    }
}

int main()
{
    solve();  
}