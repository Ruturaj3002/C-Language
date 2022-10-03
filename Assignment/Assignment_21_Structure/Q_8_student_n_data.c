#include <stdio.h>

struct student
{
    int studentid;

    char studentname[20];

    int studentpercentage;
};
struct student input()
{
    struct student e;

    printf("enter student id: ");

    scanf("%d", &e.studentid);

    printf("enter student name: ");

    fflush(stdin);

    fgets(e.studentname, 20, stdin);

    printf("enter student percentage: ");

    scanf("%d", &e.studentpercentage);

    return e;
}

void display(struct student e)
{
    printf("\nid=%d \nname=%spercentage=%d", e.studentid, e.studentname, e.studentpercentage);
    printf("\n");
}

int main()
{
    // code

    int i, n;

    printf("enter the total number of student want to store data: ");

    scanf("%d", &n);

    struct student e[n];

    for (i = 0; i < n; i++)
    {
        e[i] = input();
    }

    printf("the student detils is: ");

    for (i = 0; i < n; i++)
    {
        display(e[i]);
    }

    return 0;
}
