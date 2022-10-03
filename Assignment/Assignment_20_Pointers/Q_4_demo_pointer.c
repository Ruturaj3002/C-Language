#include <stdio.h>

int main()
{
    // code
    int x = 20, *p, **q, ***r;

    p = &x;

    q = &p;

    r = &q;

    printf("%d %d %d %d \n ", x, *p, **q, ***r);

    printf("%d %d %d %d \n", &x, p, *q, **r);

    printf("%d %d %d \n", &p, q, *r);

    printf("%d ", &r);

    return 0;
}
