#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int j = 0;
    int m, n;
    while (cin >> m >> n && (m != 0 || n != 0))
    {
        int *a = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int x = m * n;
        int result = n;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] < x)
            {
                result--;
                x -= 2;
            }
            else
                x--;
        }
        j++;
        cout << "Case " << j << ": ";

        cout << result << '\n';
        delete[] a;
    }
}