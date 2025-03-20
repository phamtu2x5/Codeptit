#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char s;
    scanf("%c", &s);
    if (('a' <= s && s <= 'z') || ('A' <= s && s <= 'Z'))
        printf("chu cai");
    else if ('0' <= s && s <= '9')
        printf("chu so");
    else
        printf("dac biet");
}