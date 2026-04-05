#include <iostream>
#include <string>
using namespace std;
void initial(string &s)
{
    for (int i = 0; i < int(s.size()); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
    }
}
int main()
{
    string s;
    while (cin >> s)
    {
        bool w = 1;
        initial(s);
        for (int i = 0; i < int(s.size()); i++)
        {
            if (s[i] != s[int(s.size()) - i - 1])
            {
                w = 0;
                cout << "no" << endl;
                break;
            }
        }
        if (w == 1)
            cout << "yes" << endl;
    }
    // system("pause");
    return 0;
}