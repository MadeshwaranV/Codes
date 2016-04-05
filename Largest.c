#include<stdio.h>
int main()
{
int n1,n2,n3,temp;
scanf("%d %d %d",&n1,&n2,&n3);
if(n1>n2&&n1>n3)
temp=n1;
else if(n2>n1&&n2>n3)
temp=n2;
else if(n3>n1&&n3>n2)
temp=n3;
printf("%d is the largest",temp);
}
