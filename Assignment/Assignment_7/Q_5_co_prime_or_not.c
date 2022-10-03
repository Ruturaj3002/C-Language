#include<stdio.h>
int main()
{
//code
int x,i,j,k;

printf("enter two number: ");

scanf("%d%d",&x,&i);


for (j=1;j<=x*i;j++) 

{

if(j%x==0 && j%i==0)

{
break;

}


}


k=x*i/j;

if (k==1)

printf("co prime");

else

printf("not co prime");



return 0;
}
