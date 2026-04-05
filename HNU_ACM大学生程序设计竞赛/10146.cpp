#include <iostream>
#include <cmath>
using namespace std;
double sum[1000005];
int main()
{
    int n;
    for (int i = 1; i <= 1000000; i++)
    {
        sum[i] = log10(double(i));
        sum[i] += sum[i - 1];
    }
    while (cin >> n)
    {
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << int(ceil(sum[n])) << endl;
        }
    }
    // system("pause");
    return 0;
}