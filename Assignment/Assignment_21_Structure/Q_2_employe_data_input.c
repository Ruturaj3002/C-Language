#include <stdio.h>

struct employe
{
    int employeid;

    char employename[20];

    float employesalary;
};

void display(struct employe e)
{
    printf("\nid=%d \nname: %ssalary: %f \n", e.employeid, e.employename, e.employesalary);
    printf("\n");
}

struct employe input()
{
    struct employe e;

    printf("enter employe id: ");

    scanf("%d", &e.employeid);

    printf("enter employe namee: ");

    fflush(stdin);

    fgets(e.employename, 20, stdin);

    printf("enter employe salary: ");

    scanf("%f", &e.employesalary);

    return e;
}
int main()
{
    // code
    struct employe e1;

    e1 = input();

    display(e1);

    printf("\n");

    printf("enter second employe detils: \n");

    struct employe e2;

    e2 = input();

    display(e2);

    struct employe e3;

    e3 = input();

    display(e3);

    return 0;
}
