#include <stdio.h>
#include <string.h>
int check_vowel(char);
int main()
{
  char a[10], b[10];
  int i,j = 0;
  printf("Enter a string to delete vowels\n");
  gets(a);
  for(i= 0;a[i]!='\0'; i++) 
  {
    if(check_vowel(a[i]) == 0) 
    {
      b[j]=a[i];
      j++;
    }
  }
  b[j]='\0';
  printf("String after deleting vowels:\n");
  puts(b);
  return 0;
}
int check_vowel(char ch)
{
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
      return 1;
    else
      return 0;
}