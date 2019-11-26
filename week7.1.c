#include<stdio.h>
#include<string.h>
void main()
{
 char a[20];
    int i;
    printf("Enter The string: ");
    gets(a);
    for (i=0;a[i]!='\0';i++)
   {
        if(a[i]>=65&&a[i]<=90)
        {
           a[i]=a[i]+32;
        }
        else if(a[i]>=97&&a[i]<=122)
        {
           a[i]=a[i]-32;
        }    
    }
    printf("the string after changing is:");
    puts(a);
}