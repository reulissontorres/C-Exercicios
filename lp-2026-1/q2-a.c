#include <stdio.h>

int calcula(int k);

void main()
{
    int j = 0;

    j = calcula(1);
    printf("(k == 1) --> %d\n", j);

    j = calcula(2);
    printf("(k == 2) --> %d\n", j);

    j = calcula(3);
    printf("(k == 3) --> %d\n", j);

    j = calcula(4);
    printf("(k == 4) --> %d\n", j);

    j = calcula(5);
    printf("(k == 5) --> %d\n", j);

    j = calcula(6);
    printf("(k == 6) --> %d\n", j);

    j = calcula(7);
    printf("(k == 7) --> %d\n", j);

    j = calcula(8);
    printf("(k == 8) --> %d\n", j);
}

int calcula(int k)
{
    int j = 0;

    switch (k)
    {
        case 1:
        case 2:
            j = 2 * k - 1;
            break;
        case 3:
        case 5:
            j = 3 * k + 1;
            break;
        case 4:
            j = 4 * k - 1;
            break;
        case 6:
        case 7:
        case 8:
            j = k - 2;
    }

    return j;
}