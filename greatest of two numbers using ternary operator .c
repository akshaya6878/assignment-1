#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    (a>b)?
    printf("\n %d is greater than %d",a,b) : printf("\n %d is greater than %d",b,a);
    return 0;
}
