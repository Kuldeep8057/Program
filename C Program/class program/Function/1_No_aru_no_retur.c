#include<stdio.h>
void add();
int main()
{
    add();
    return 0;

}
void add()
{
    int a,b,c;
    printf("enter the number\n");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("sum=%d",c);
}
