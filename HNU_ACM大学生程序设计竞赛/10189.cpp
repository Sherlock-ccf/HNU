#include <iostream>
using namespace std;
int a[15], b[15];
int main()
{
    int n;
    while (cin >> n)
    {
        int ans = 0;
        if (n == -1)
        {
            break;
        }
        int now, las = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i] >> now;
            b[i] = now - las;
            las = now;
            ans += (a[i] * b[i]);
        }
        cout << ans << " miles" << endl;
    }
    // system("pause");
    return 0;
}