#include <iostream>
using namespace std;
int lowbit(int x)
{
    return x & -x;
}
int main()
{
    int n;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        cout << lowbit(n) << endl;
    }
}