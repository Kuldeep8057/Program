/*#include<stdio.h>
int main()
{
    char ch;
    printf("enter the any character:- ");
    scanf("%c",&ch);
    printf("ASCII vlaue of %c is %c",ch,ch);
    return 0;
}*/
#include <stdio.h>
int main() {  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);
    
    return 0;
}