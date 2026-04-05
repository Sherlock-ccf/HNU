/*Бо
ans[i][j]=n*((i+j+floor((n-3)/2))mod n)+(i-j+floor((3n-1)/2))mod n +1
*/
#include <iostream>
using namespace std;
int getnum(int i, int j, int n)
{
    return n * ((i + j + ((n - 3) / 2)) % n) + ((i - j + ((3 * n - 1) / 2))) % n + 1;
}
int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        else
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    cout << getnum(i, j, n) << " ";
                }
                cout << endl;
            }
        }
        cout << endl;
    }
    // system("pause");
    return 0;
}