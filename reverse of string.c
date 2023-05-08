#include <stdio.h>
#include<string.h>
int main() {
	char s[100];
    printf("enter the string ");
    scanf("%s",s);
    printf("\nstring after reversed\n%s\n",strrev(s));
}
