#include <bits/stdc++.h>
typedef long long LL;
using namespace std;
const int maxx = 100005;
LL f[maxx];
LL g[maxx];
void merge(int left, int right)
{
    int mid = (left + right) / 2;
    int i = left, j = mid + 1, cnt = left;
    bool w = false;
    while (i <= mid && j <= right)
    {
        if (f[i] <= f[j])
        {
            g[cnt] = f[i];
            i++;
        }
        else
        {
            g[cnt] = f[j];
            j++;
        }
        cnt++;
    }
    while (j <= right)
    {
        g[cnt] = f[j];
        j++;
        cnt++;
    }
    while (i <= mid)
    {
        g[cnt] = f[i];
        i++;
        cnt++;
    }
    for (int k = left; k <= right; k++)
        f[k] = g[k];
}
void mergesort(int left, int right)
{
    if (left >= right)
        return;
    int mid = (left + right) / 2;
    mergesort(left, mid);
    mergesort(mid + 1, right);
    merge(left, right);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> f[i];
    }
    mergesort(1, n);
    for (int i = 1; i <= n; i++)
        cout << f[i] << " ";
}