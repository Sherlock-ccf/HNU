#include <iostream>
#include <string>
using namespace std;
string s;
int main()
{
    while (getline(cin, s))
    {
        int pos = s.find('/') + 2;
        cout << "server: ";
        for (int i = pos; s[i] != '.'; i++)
            cout
                << s[i];
        cout << endl;
    }
    // system("pause");
    return 0;
}