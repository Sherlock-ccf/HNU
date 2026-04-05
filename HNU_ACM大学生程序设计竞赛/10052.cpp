#include <iostream>
using namespace std;
int getsum(int n)
{
    return (1 + n) * n / 2;
}
int main()
{
    int s;
    cin >> s;
    for (int i = 1; true; i++)
    {
        int sum = getsum(i);
        if (sum < s)
            continue;
        else if ((sum - s) % 2 == 0)
        {
            cout << i;
            break;
        }
    }
    // system("pause");
    return 0;
}