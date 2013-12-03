#include <stdio.h>
#include "add.h"
#include "mul.h"


int main (int argc, char *argv[])
{
#if 1
    int result;
    result = add (3, 5);
    printf ("add: result = %d\n", result);

    result = mul (3, 5);
    printf ("mul: result = %d\n", result);
#endif
    return 0;
}
