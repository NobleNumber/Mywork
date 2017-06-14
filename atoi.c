/*
    This code changes string into integer.
    I wanted to create function like 'atoi', 'atof' and 'atol', but I could create only 'atoi'.
    These were difficult for me yet.

    written in UTF-8
    2017.6.14.16.45 UTC+9
*/
#include <stdio.h>



int str_toi(const char *s)
{
    int num = 0;

    for (; (*s >= '0') && (*s <= '9') && (*s != '\0'); s++) {
        num = 10 * num + (*s - '0');
    }

    return num;
}


int main(void)
{
    char str[128];

    puts("Enter string.");
    scanf("%s", str);

    printf("changed into int : %d\n", str_toi(str));

    return 0;
}
