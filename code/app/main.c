#include <stdlib.h>
#include <stdio.h>

#include "Dummy.h"

int main()
{
    TDummy* d1 = Dummy__constructor(1, 2, NULL);
    TDummy* d2 = Dummy__copy_constructor(d1);
    TDummy* d3 = Dummy__move_constructor(&d2);
    d3 = Dummy__distructor(&d3);

    return 0;
}