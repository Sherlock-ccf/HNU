#include <iostream>
using namespace std;
bool w[10040];
int getd(int x)
{
    int ans = x;
    while (x > 0)
    {
        ans += (x % 10);
        x /= 10;
    }
    return ans;
}
int main()
{
    for (int i = 1; i < 10000; i++)
    {
        w[getd(i)] = 1;
    }
    for (int i = 1; i < 10000; i++)
    {
        if (w[i] == 0)
            cout << i << endl;
    }
    // system("pause");
    return 0;
}