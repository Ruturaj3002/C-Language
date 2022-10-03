#include <stdio.h>
#include <stdlib.h>
int main()
{
    // code
    int x, a, b;
    while (1)
    {
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Divide");
        printf("\n5. Exit");
        printf("\n\nenter your choice: ");
        scanf("%d", &x);

        switch (x)
        {
        case 1:

            printf("enter two number: ");
            scanf("%d%d", &a, &b);
            printf("the sum is %d", a + b);
            break;

        case 2:

            printf("enter two numbers: ");
            scanf("%d%d", &a, &b);
            printf("the diff is %d", a - b);
            break;

        case 3:
            printf("enter two numbers: ");
            scanf("%d%d", &a, &b);
            printf("the multiply is %d", a * b);
            break;
        case 4:

            printf("enter two numbers: ");
            scanf("%d%d", &a, &b);
            printf("the devide is %d", a / b);
            break;
        case 5:
            exit(0);

        default:
            printf("invalid choice");
        }
    }
    return 0;
}
