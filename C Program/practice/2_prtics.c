#include<stdio.h>
int main()
{
    int i,j,n,t,first,last,middle,search,a[0];
    printf("enter the value\n");
    scanf("%d",&n);
    printf("enter the element\n");
    for(i=0;i<=n;i++)
    scanf("%d",a[i]);
    printf("enter the find valuen\n");
    scanf("%d",&search);
    for(i=0;i<=9;++i){
        for(j=0;j<=9;++j){
            if(a[i]==a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("the number of arrange is asendig order\n");
        for(i=0;i<=9;++i)
        {
            printf("%d",a[i]);
        }
        printf("\n");
        first=0;
        last=n-1;
        middle=(first+last)/2;
        while (first<=last)
        {
            if(a[middle]<search)
            first=middle+1;
            else if(middle==search)
            {
                printf("%d is location %d\n",search,middle);
                break;
            }
            else
            {
                last=middle-1;
            }
            middle=(first+last)/2;
        }
        if(first>last)
        {
            printf("not found %d in this list\n");
        }
        return 0;
}

        
    
    
