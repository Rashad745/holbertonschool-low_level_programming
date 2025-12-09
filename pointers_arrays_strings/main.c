#include <stdio.h>
#include "main.h"

int main(void)
{
    int n = 0;
    int a = 98, b = 42;
    char *str = "Hello";

    reset_to_98(&n);
    printf("n = %d\n", n);

    printf("Before swap: a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("After swap: a=%d, b=%d\n", a, b);

    printf("Length of '%s' is %d\n", str, _strlen(str));

    return 0;
}
