#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>

using namespace std;

#define INF 99999999
#define MAX_N 1000

struct Point
{
    double l, r;
} pt[MAX_N];

int n, d;
bool bNo;

bool cmp(const Point &a, const Point &b)
{
    return a.l < b.l;
}

int main()
{
    int T = 1;
    scanf("%d%d", &n, &d);

    while (n != 0 || d != 0)
    {
        bNo = false;
        for (int i = 0; i < n; i++)
        {
            int x, y;

            scanf("%d%d", &x, &y);
            if (y > d)
            {
                bNo = true;
                continue;
            }
            double delta = sqrt(d * d - y * y);
            pt[i].l = x - delta;
            pt[i].r = x + delta;
        }

        if (!bNo)
        {
            sort(pt, pt + n, cmp);

            double maxr;

            maxr = -INF;
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (maxr < pt[i].l)
                {
                    cnt++;
                    maxr = pt[i].r;
                }
                else if (maxr > pt[i].r)
                {
                    maxr = pt[i].r;
                }
            }
            printf("Case %d: %d\n", T++, cnt);
        }
        else
            printf("Case %d: -1\n", T++);

        scanf("%d%d", &n, &d);
    }

    return 0;
}