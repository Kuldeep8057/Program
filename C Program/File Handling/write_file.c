#include<stdio.h> 
#include<stdlib.h> 
int main( )  
{  
FILE *fp ;  
char ch ;  
fp = fopen("write_file.c","r") ; 
if(fp==NULL){
    printf("File not found!");
    exit(1);
} 
while ( 1 )  
{  
ch = fgetc ( fp ) ;  
if ( ch == EOF )  
break ;  
printf("%c",ch) ;  
}  
fclose (fp ) ;  

}