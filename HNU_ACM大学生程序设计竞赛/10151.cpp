#include <iostream>
using namespace std;
int f[60], g[60];
int main()
{
    g[1] = 1, g[2] = 0, g[3] = 1;
    f[1] = 1;
    for (int i = 4; i <= 60; i++)
    {
        g[i] = g[i - 1] + g[i - 3];
    }
    for (int i = 2; i <= 57; i++)
    {
        f[i] = f[i - 1] + g[i - 1];
    }
    int n;
    while (cin >> n)
    {
        cout << f[n] << endl;
    }
    // system("pause");
    return 0;
}