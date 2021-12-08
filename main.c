#include<stdio.h>

void str_copy(char *dest, char *src) 
{
    while (*dest != 0) dest++;
    while (*dest++ = *src++);
}

int main()
{
    char str1[] = "abc";
    char str2[] = "1234";
    int a;

    str_copy(str1, str2);
    printf(str1);
    printf("\n");

    printf("a=1: %d\n", a=1);
    printf("a=0: %d\n", a=0);

    return 0;
}