#include <stdio.h>
#include <math.h>
int main()
{
    // code
    float a, b, c, z;
    float root1, root2, p;

    printf("enter three number: ");

    scanf("%f%f%f", &a, &b, &c);

    z = (b * b) - (4 * a * c);

    switch (z > 0)
    {
    case 1:

        root1 = (-b + sqrt(z)) / (2 * a);
        root2 = (-b - sqrt(z)) / (2 * a);

        printf("Two distinct and real roots exists: %f%f", root1, root2);

        break;
    }

    switch (z < 0)
    {
    case 1:

        root1 = root2 = -b / (2 * a);
        p = sqrt(-z) / (2 * a);

        printf("Two distinct complex roots exists:%f%f%f%f", root1, p, root2, p);

        break;
    }

    return 0;
}
