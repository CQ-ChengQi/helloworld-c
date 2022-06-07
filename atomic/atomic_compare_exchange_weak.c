#include <stdio.h>
#include <stdatomic.h>

int main()
{
    atomic_int i = 0;
    atomic_init(&i, 6);

    int j = 6;
    if (atomic_compare_exchange_weak(&i, &j, 3))
    {
        printf("%d \r\n", atomic_load(&i));
    }
    else
    {
        printf("写入失败 \r\n");
    }

    return 0;
}