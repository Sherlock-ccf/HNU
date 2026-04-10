#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int n, c;
double ans = 0;
struct obj
{
    double v, w;
} arr[N];
bool cmp(obj x, obj y)
{
    // x>y => x.v/x.w>y.v/y.w => x.v*y.w>y.v*x.w
    return x.v * y.w > y.v * x.w;
}
int main()
{
    cin >> n >> c;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i].w >> arr[i].v;
    }
    sort(arr + 1, arr + n + 1, cmp);
    int i = 1;
    while (c > 0 && i <= n)
    {
        if (c > arr[i].w)
        {
            c -= arr[i].w;
            ans += arr[i].v;
        }
        else
        {
            ans += arr[i].v * c / arr[i].w;
            c = 0;
        }
        i++;
    }
    cout << ans;
}