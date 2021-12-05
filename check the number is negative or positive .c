#include<stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a>0)
    {
        printf("entered number is positive number");
        }
        else if(a<0)
        {
            printf("entered number is negative number");
        }
        else{
        //a==0
        
            printf("entered number is neither negative nor positive");
        }
        return 0;
}
