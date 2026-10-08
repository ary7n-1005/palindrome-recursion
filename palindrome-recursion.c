#include <stdio.h>
#include <string.h>
int isPalindrome(char *str, int start, int end)
{
  if(start>=end)
  return 1;
  if(str[start]!=str[end])
  return 0;
  
  return isPalindrome(str,start+1,end-1);
}



int main()
{
  char *str;
  printf("Enter string:" );
  scanf("%s",str);
  
  while (strcmp(str,"END") && strcmp(str,"end"))
  {
    int end= strlen(str)-1;
    int start =0;
    if(isPalindrome(str,start,end)==1)
    printf("It is a Palindrome\n");
    else
    printf("It is not a Palindrome\n");
    
    printf("Enter string:" );
    scanf("%s",str);
  }
  return 0;
}