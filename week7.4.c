#include<stdio.h>
void main()
{
    char a[30],b[30];int i=0,d,n1=0,n2=0,k=0;
    gets(a);gets(b);
    while(a[i]!='\0')
    {
        if((a[i]>='0')&&(a[i]<='9'))
        {
            d=(int)a[i]-48;
        n1=n1*10+d;
         }
         
         else if((a[i]!=92)||(a[i+1]!='0'))
         {
            if(a[i]!='-')
            k=1;
         }
         i++;
    }
        i=0;
     while(b[i]!='\0')
    { 
        if(b[i]>='0'&&b[i]<='9')
        {
        d=(int)b[i]-48;
        n2=n2*10+d;
         
         }
          else if((b[i]!=92)||b[i+1]!=48)
         {
             if(b[i]!='-')
             k=1;
         }
         i++;

    }
    if(k==0)
    {
    if(a[0]=='-')
         n1=-n1;
         if(b[0]=='-')
         n2=-n2;
        printf("the sum of two given strings is %d",n1+n2);
    }
    else printf("Enter correct input");

}