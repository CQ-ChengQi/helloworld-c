#include <stdio.h>
#include <stdatomic.h>

int main()
{
    atomic_int i = 1;
    int j = atomic_load(&i);

    printf("%d \r\n", j);

    return 0;
}