#include<stdio.h>
#include<string.h>
int main()
{
    int size=0,i=0;
    char arr[44];
    puts("enter a string");
    gets(arr); //entire sentence can be input
    printf("your input was:%s",arr);
    while(arr[i]!='\0')//until null character is encountered
    {
        i++;
        size++;
    }

 puts("the reverse is:");
 for(i=size;i>0;i--)
 {
    printf( "%c",arr[i-1]);
 }  
}

