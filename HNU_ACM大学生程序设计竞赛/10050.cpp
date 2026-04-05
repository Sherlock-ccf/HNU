#include <iostream>
#include <string.h>
using namespace std;
bool w[3001];
int arr[3005];
int main()
{
    int n;
    while (cin >> n)
    {
        bool we = 1;
        memset(w, 0, sizeof(w));
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        for (int i = 2; i <= n; i++)
        {
            int x = abs(arr[i] - arr[i - 1]);
            if (x <= 0 || x >= n)
            {
                we = 0;
                break;
            }
            else
                w[x] = 1;
        }
        if (we == 0)
        {
            cout << "Not jolly" << endl;
            continue;
        }
        for (int i = 1; i <= n - 1; i++)
        {
            if (w[i] == 0)
            {
                cout << "Not jolly" << endl;
                we = 0;
                break;
            }
        }
        if (we == 1)
        {
            cout << "Jolly" << endl;
        }
    }
    // system("pause");
    return 0;
}