#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    for(i= 0;i<10;i++)
    {
        printf("enter the number",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
    sum=sum+arr[i];
    printf("sum is %d",sum);
    }
    return 0;
}
