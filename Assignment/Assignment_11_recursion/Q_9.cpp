#include <stdio.h>
#include <iostream>
using namespace std;
void squ();
int main()
{
    // code

    squ();

    return 0;
}

void squ()

{

    int x;

    printf("enter the number: ");

    scanf("%d", &x);
    cout << "hello";
    cout<<endl;
    printf("the square of %d is %d", x, x * x);
}