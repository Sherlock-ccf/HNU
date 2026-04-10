#include <bits/stdc++.h>
using namespace std;
int C(int n, int k)
{
    if (k == 0)
    {
        return 1;
    }
    if (n < k)
    {
        return 0;
    }
    int res = 1;
    for (int i = 0; i < k; ++i)
    {
        res = res * (n - i) / (i + 1);
    }
    return res;
}
int solve(string s)
{
    int len = s.size();
    int cnt = 0;
    for (int i = 1; i < len; ++i)
    {
        cnt += C(26, i);
    }
    int pre = -1;
    for (int i = 0; i < len; ++i)
    {
        int cur = s[i] - 'a';
        for (int j = pre + 1; j < cur; ++j)
        {
            cnt += C(25 - j, len - i - 1);
        }
        pre = cur;
    }
    return cnt + 1;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int ans = solve(s);
        cout << ans << endl;
    }
    return 0;
}