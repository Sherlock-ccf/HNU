#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int m, n, v[N], c[N], f[N], ans;
int main()
{
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i] >> c[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = m; j >= v[i]; j--)
        {
            f[j] = max(f[j], f[j - v[i]] + c[i]);
        }
    }
    for (int i = 0; i <= m; i++)
        ans = max(ans, f[i]);
    cout << ans;
}