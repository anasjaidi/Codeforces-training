#include <iostream>
#include <map>
using namespace std;

void    solve()
{
    int arr[4], c = 0;
    map<int , int> map;
    for (size_t i = 0; i < 4; i++)
    {
        cin >> arr[i];
        if (!map[arr[i]])
        {
            c++;
            map[arr[i]] = 1;
        }        
    }
    cout <<4 -  c << endl;
}

int main()
{
    solve();
}