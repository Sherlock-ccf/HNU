#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << gcd(a, b) << endl;
    }
    // system("pause");
    return 0;
}