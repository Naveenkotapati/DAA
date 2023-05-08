#include <string.h>
 #include<stdio.h>
int main()
{
   char s1[1000],s2[1000];  
    int i;
    printf("Enter any string: ");
    scanf("%s",s1);
    strcpy(s2,s1);
    printf("original string s1='%s'\n",s1);
    printf("copied string   s2='%s'",s2);
}
