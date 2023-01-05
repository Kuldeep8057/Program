#include<stdio.h>
int main()
{
    int a[5],i,large;
    printf("enter your element\n");
    for(i=0;i<=4;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        if(a[i]>large)
        {
            large=a[i];
        }    
    }
    printf("largest number from array is %d",large);
    return 0;
}     