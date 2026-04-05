#include <iostream>
using namespace std;
int arr[10005];
int pos[10005];
int main()
{
    int t, n;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        int ans = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            pos[arr[i]] = i;
        }
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] != i)
            {
                int x = arr[i];
                swap(arr[i], arr[pos[i]]);
                pos[x] = pos[i];
                pos[i] = i;
                ans++;
            }
        }
        cout << ans << endl;
    }
    // system("pause");
    return 0;
}