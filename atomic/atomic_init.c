#include <stdatomic.h>
#include <stdio.h>

int main()
{
    atomic_int i = 0;
    atomic_init(&i, 1);

    printf("%d \r\n", i);
    
    return 0;
}