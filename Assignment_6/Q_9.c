#include<stdio.h>
int main()
{
//code
int x,i,j;

printf("enter two number: ");

scanf("%d%d",&x,&i);


for (j=1;j<=x*i;j++) 

{

if(j%x==0 && j%i==0)

{
break;

}


}

printf("lcm is %d",j);


return 0;
}
