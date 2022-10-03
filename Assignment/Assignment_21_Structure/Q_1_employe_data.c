#include <stdio.h>
int main()
{
    // code
    struct employe
    {
        int employeid;

        char employename[20];

        float employesalary;
    };

    struct employe e1 = {234, "ruturaj", 20000.0f};

    struct employe e2 = {2332, "new", 5000.0f};

    struct employe e3 = {123, "new1", 6000.0f};

    printf("employe 1 details is:\nid= %d \nname: %s \nslary %f", e1.employeid, e1.employename, e1.employesalary);

    printf("\n\nemploye 2 details is:\n id= %d \nname: %s \nsalary %f", e2.employeid, e2.employename, e2.employesalary);

    printf("\n\nemploye 3 details is:\n id= %d \nname: %s \nsalary %f", e3.employeid, e3.employename, e3.employesalary);

    return 0;
}
