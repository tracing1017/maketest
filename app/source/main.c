#include <stdio.h>
#include "add.h"
#include "mul.h"


int main (int argc, char *argv[])
{
    int result;
    result = add (3, 5);
    printf ("add: result = %d\n", result);

    result = mul (3, 5);
    printf ("mul: result = %d\n", result);
    return 0;
}
