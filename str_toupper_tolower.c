/*
    This program change string to lowercase and uppercase.

    Written in UTF-8
    2017.6.13.20.00 UTC+9
*/
#include <stdio.h>
#include <ctype.h>



void str_to_lower(char *s)
{
    while (*s) {
        *s = tolower(*s);
        s++;
    }
}


void str_to_upper(char *s)
{
    while (*s) {
        *s = toupper(*s);
        s++;
    }
}


int main(void)
{
    char str[128];

    puts("Enter characters.");
    scanf("%s", str);

    str_to_lower(str);
    printf("%s\n", str);

    str_to_upper(str);
    printf("%s\n", str);

    return 0;
}
