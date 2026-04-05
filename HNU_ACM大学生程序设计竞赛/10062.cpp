#include <iostream>
using namespace std;
void getans(int n, int &ans)
{
    ans = 0;
    int value = 1;
    while (n > 0)
    {
        int now = n % 10;
        if (now >= 5)
            now -= 1;
        ans += (now * value);
        value *= 9;
        n /= 10;
    }
}
int main()
{
    int n;
    while (cin >> n)
    {
        int ans;
        if (n == 0)
            break;
        getans(n, ans);
        cout << n << ": " << ans << endl;
    }
    // system("pause");
    return 0;
}