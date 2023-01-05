#include<stdio.h>
int main()
{
    int a[5],i,sum=0;
    printf("enter the element\n");
    for (i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
        sum=sum + a[i];
    }
    printf("sum of array element are %d",sum);
    return 0;
}