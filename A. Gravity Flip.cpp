#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void    solve()
{
    int n, i;
    cin >> n;
    int *arr = new int[n];
    for (i = 0; i < n; i++)
        cin >> arr[i];
    //////////////////////
    /* method number 1 */
    ////////////////////
   /*  for (i = 0; i < n -1; i++)
    {
        for (size_t j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        
    } */
    //////////////////////
    /* method number 2 */
    ////////////////////
    ///////////////////
    sort(arr, arr + n);
    ////////////////////
    for (i = 0; i < n - 1; i++)
        cout << arr[i] << ' ';
    cout << arr[i] <<endl;
}

int main()
{
    solve();
    return 0;
}
