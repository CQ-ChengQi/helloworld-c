#include <stdio.h>
#include <stdatomic.h>

int main()
{
    atomic_int i = 0;
    int i1 = atomic_fetch_add(&i, 1);
    int i2 = atomic_fetch_add(&i, 1);
    int i3 = atomic_fetch_add(&i, 1);

    printf("i:%d, i1:%d, i2:%d, i3:%d\r\n", i, i1, i2, i3);     // Console: i:3, i1:0, i2:1, i3:2

    return 0;
}