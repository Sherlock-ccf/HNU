#include <algorithm>

#include <iostream>

#include <time.h>

#include <string.h>
using namespace std;

int main()

{
    int i, D = 0, num[10] = {0}, _num = 0;

    char labels[10];

    while (scanf("%s", labels))

    {

        if (labels[0] == 'z')
            break;

        else if (labels[0] == 'x')

        {

            if (_num == 0)
                printf("Spinlock Results\n");

            for (i = 0; i < D; i++)

                printf("%d", num[i] % 10);

            printf("\n");

            D = 0, _num++;

            memset(num, 0, sizeof(num));

            continue;
        }

        else if (D == 0)
            D = strlen(labels);

        for (i = 0; i < D; i++)

            num[i] += labels[i] - '0';
    }

    return 0;
}