#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        for (int i = int(s.size() - 1); i >= 0; i--)
        {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}