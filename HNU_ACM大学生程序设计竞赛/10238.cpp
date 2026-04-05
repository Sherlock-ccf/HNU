#include <vector>
#include <iostream>
using namespace std;
typedef long long ll;
vector<ll> p;
int main()
{
    for (ll i = 1; (i - 1) * i / 2 < 2147483648; i++)
    {
        p.push_back(i * (i - 1) / 2);
    }
    ll n;
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++)
    {
        ll a;
        scanf("%lld", &a);
        bool w = 0;
        vector<ll>::iterator m = lower_bound(p.begin(), p.end(), a - 1);
        if (*m == a - 1)
            w = 1;
        cout << int(w) << endl;
    }
    return 0;
}