#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const double pi = 3.14159;
int main()
{
    double x, y, z;
    double distance = 0;
    string start;
    while (true)
    {
        cin >> start;
        if (start == "ENDOFINPUT")
            break;
        cin >> x >> y >> z;
        string end;
        cin >> end;
        if (z > 180)
        {
            z = 360 - z;
        }
        distance = 2 * pi * x * (z / 360);
        if (2 * distance <= y * 5)
        {
            int remain = trunc(y - 2 * distance / 5);
            cout << "YES"
                 << " " << remain << endl;
        }
        else
        {
            cout << "NO"
                 << " " << y * 5 << endl;
        }
    }
    return 0;
}