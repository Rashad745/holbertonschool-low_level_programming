#include "main.h"   /* This tells the compiler about string_nconcat */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *res;

    res = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", res);
    free(res);

    return (0);
}

