#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int c[N], n;
int lowbit(int x)
{
    return x & (-x);
}
int getsum(int x)
{
    int ans = 0;
    while (x > 0)
    {
        ans = ans + c[x];
        x = x - lowbit(x);
    }
    return ans;
}
void add(int x, int k)
{
    while (x <= n)
    {
        c[x] = c[x] + k;
        x = x + lowbit(x);
    }
}
int main()
{
    string s;
    while (cin >> s)
    {
        memset(c, 0, sizeof(c));
        n = s.length();
        int val = 1;
        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int num = s[i] - '1' + 1;
            add(num, 1);
            ans += getsum(num - 1) * val;
            val *= (n - i);
        }
        cout << ans << endl;
        int i, j;
        for (i = n - 2; i >= 0; i--)
        {
            if (s[i] < s[i + 1])
            {
                break;
            }
        }
        for (j = n - 1; j > i; j--)
        {
            if (s[j] > s[i])
            {
                break;
            }
        }
        swap(s[i], s[j]);
        reverse(s.begin() + i + 1, s.end());
        cout << s << endl;
    }
}