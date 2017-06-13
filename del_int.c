/*
    This program removes integers from string.

    Written in UTF-8
    2017.6.13.20.20 UTC+9
*/
#include <stdio.h>



void del_digit(char *str)
{
    char *tmp = str;

    while (*str) {
        if (*str < '0' || *str > '9')
            *tmp++ = *str;
        str++;
    }

    *tmp = '\0';
}


int main(void)
{
    char str[128];

    puts("Enter characters.");
    scanf("%s", str);

    del_digit(str);
    printf("%s\n", str);

    return 0;
}
