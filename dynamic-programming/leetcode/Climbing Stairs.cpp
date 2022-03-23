int tab[50] = {0};


class Solution {
public:
    int climbStairs(int n) {
        if (n <= 3)
            return n;
        if (tab[n])
            return tab[n];
        else
        {
            tab[n] = climbStairs(n - 1) + climbStairs(n - 2);
        }
        return tab[n];
    }
};