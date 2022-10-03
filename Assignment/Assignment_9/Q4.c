#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // code
    int x, a, b, c, d;
    while (1)
    {
        printf("\n1. check isosceles triangle");
        printf("\n2. check right angled triangle");
        printf("\n3. check equilateral triangle");
        printf("\n4. Exit");
        printf("\n\nenter your choice: ");
        scanf("%d", &x);

        switch (x)
        {
        case 1:

            printf("enter three sides of trangle: ");
            scanf("%d%d", &a, &b, &c);

            if (a == b || b == c || c == a)
                printf("the triangle is isosceles");
            else
                printf("not isosceles");

        case 2:

            printf("enter three sides of triangle: ");
            scanf("%d%d%d", &a, &b, &c);
            a = pow(a, 2);
            b = pow(b, 2);
            c = pow(c, 2);
            d = a + b;
            if (d == c)
            {
                printf("the triangle is a right angle triangle");
            }
            else
            {
                printf("is not a right angle triangle");
            }
            break;

        case 3:
            printf("enter three sides of triangle: ");
            scanf("%d%d%d",&a,&b,&c);
            if (a == b && b == c)
                printf("the triangle is euilaterial");
            else
                printf("not euilaterial");
            break;

        case 4:
            exit(0);
        default:
            printf("invalid choice");
        }
    }
    return 0;
}
