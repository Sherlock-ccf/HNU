#include <iostream>
using namespace std;
int arr[105];
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        for (int k = 1; k <= n; k++)
        {
            cin >> arr[k];
        }
        bool w = 1;
        for (int k = 1; k <= n; k++)
        {
            if (arr[arr[k]] != k)
            {
                w = 0;
                break;
            }
        }
        if (w == 0)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
    // system("pause");
    return 0;
}