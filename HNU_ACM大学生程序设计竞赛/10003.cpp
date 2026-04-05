#include <iostream>
using namespace std;
__int64 num[10005], up[10005], down[10005];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, a, b;
        cin >> m >> a >> b;
        for (int i = 1; i <= m; i++)
        {
            cin >> num[i];
        }

        up[1] = 0;
        int sum0 = num[1];
        int sum1 = 0;
        for (int i = 2; i <= m; i++)
        {
            up[i] = up[i - 1] + b * sum0 + sum1;
            sum1 += sum0;
            sum0 += num[i];
        }

        down[m] = 0;
        sum0 = num[m];
        sum1 = 0;
        for (int i = m - 1; i >= 1; i--)
        {
            down[i] = down[i + 1] + a * sum0 + sum1;
            sum1 += sum0;
            sum0 += num[i];
        }
        __int64 mymin = up[1] + down[1];
        int k = 1;
        for (int i = 1; i <= m; i++)
        {
            if (up[i] + down[i] < mymin)
            {
                mymin = up[i] + down[i];
                k = i;
            }
        }
        cout << k << endl;
    }
}