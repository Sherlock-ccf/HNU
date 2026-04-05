#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double x[20], y[20], xx[20], yy[20];
double dic(double x1, double y1, double x2, double y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
double ans[10005];
inline int f(int x)
{
    int now = 2, ans = 1;
    bool m;
    while (x > 0)
    {
        m = x & 1;
        if (m)
            ans *= now;
        now *= now;
        x >>= 1;
    }
    return ans;
}
int main()
{
    int N;
    int num = 0;
    while (true)
    {
        cin >> N;
        if (N == 0)
            break;
        num++;
        for (int i = 1; i <= N; i++)
            cin >> x[i] >> y[i];

        for (int i = 0; i <= f(N) - 1; i++)
        {
            double minn = 2147483647;
            int k = i;
            for (int j = 1; j <= N; j++)
            {
                bool m = k & 1;
                xx[j] = x[j];
                if (m)
                {
                    yy[j] = y[j] + 1;
                }
                else
                {
                    yy[j] = y[j] - 1;
                }
                k >>= 1;
            }
            for (int j = 2; j <= N; j++)
            {
                for (int l = 1; l < j; l++)
                {
                    minn = min(minn, dic(xx[j], yy[j], xx[l], yy[l]));
                }
            }
            ans[num] = max(ans[num], minn);
        }
    }
    for (int i = 1; i <= num; i++)
        cout << fixed << setprecision(3) << ans[i] << endl;
}