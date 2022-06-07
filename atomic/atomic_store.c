#include <stdio.h>
#include <stdatomic.h>

int main()
{

    atomic_int i = 0;
    atomic_init(&i, 1);
    atomic_store(&i, 5);

    printf("%d \r\n", i);   // Console: 5

    return 0;
}