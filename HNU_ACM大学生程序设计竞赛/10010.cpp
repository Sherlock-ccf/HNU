#include <iostream>
using namespace std;
typedef long long ll;
bool w[10000005];
ll arr[500005];
int main()
{
    w[0] = 1;
    for (int i = 1; i <= 500000; i++)
    {
        if (arr[i - 1] - i >= 0 && w[arr[i - 1] - i] != 1)
        {
            arr[i] = arr[i - 1] - i;
            w[arr[i]] = 1;
        }
        else
        {
            arr[i] = arr[i - 1] + i;
            w[arr[i]] = 1;
        }
    }
    int n;
    while (cin >> n)
    {
        if (n == -1)
            break;
        else
            cout << arr[n] << endl;
    }
}