#include <stdio.h>
int f1(int, int);

int main()

{
    // code
    int x, y, a, z;
    printf("enter two number: ");
    scanf("%d%d", &x, &y);

    z = f1(x, y);
    printf("LCM is %d", z);

    return 0;
}

int f1(int a, int b)

{

    int z;

    for (z = 1; z <= a * b; z++)

    {

        if (z % a == 0 && z % b == 0)
        {

            break;
        }
    }

    return z;
}
