#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        if (n % 2 == 0 || n == 1)
        {
            cout << "2^? mod " << n << " = 1" << endl;
            continue;
        }
        int ans = 1;
        for (int i = 1; true; i++)
        {
            ans *= 2;
            if (ans % n == 1)
            {
                cout << "2^" << i << " mod " << n << " = 1" << endl;
                break;
            }
            ans %= n;
        }
    }
    // system("pause");
    return 0;
}