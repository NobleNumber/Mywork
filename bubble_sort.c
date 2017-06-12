/*
    This is simple bubble sort program.
    If you need, you can use this program without any permission.
    But I cannot take responsibility.
    I would appreciate it if you could tell me the bad point and how to fix it.

    written in UTF-8
    written in 2017.6.12.20.30 UTC+9
*/
#include <stdio.h>

#define NUMBER 10   //The number of numbers.



void bubble_sort(int *a)
{
    int i, j;
    int tmp;

    for (i = NUMBER - 1; i >= 0; i--) {
        for (j = 0; j < i; j++) {
            if (a[j] > a[j+1]) {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}


void In_value(int *n) {
    printf("Enter %d numbers.\n", NUMBER);

    for (int i = 0; i < NUMBER; i++) {
        scanf("%d", n);
        n++;
    }
}


int main(void)
{
    int nums[NUMBER];

    In_value(nums);

    bubble_sort(nums);

    for (int i = 0; i < NUMBER; i++)
        printf("%d ", nums[i]);

    putchar('\n');

    return 0;
}
