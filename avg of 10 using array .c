#include<stdio.h>
int main()
{
    int arr[10];
    int i;
    int sum=0,avg=0;
    printf("enter 10 numbers");
    for(i=0;i<10;i++)
    {
        printf("enter the number %d",i+1);
        scanf("%d",&arr[i]);
        }
        for(i=0;i<10;i++)
        {
            sum=sum+arr[i];
        }
        avg=sum/10;
        printf("avg is %d",avg);
        return 0;
}
