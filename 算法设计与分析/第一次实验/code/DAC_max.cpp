#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int arr[N];
pair<int, int> dac_solve(int l, int r)
{
    if (l == r)
    {
        return make_pair(arr[l], arr[r]);
    }
    int mid = (l + r) / 2;
    pair<int, int> left = dac_solve(l, mid);
    pair<int, int> right = dac_solve(mid + 1, r);
    return make_pair(max(left.first, right.first), min(left.second, right.second));
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    pair<int, int> ans = dac_solve(1, n);
    cout << ans.first << " " << ans.second << endl;
}