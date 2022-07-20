#include <stdio.h>
#include <stdatomic.h>

int main()
{
    atomic_int i = 0xF;
    int i1 = atomic_fetch_and(&i, 1);

    printf("i:%d, i1:%d\r\n", i, i1);     // Console: i:1, i1:15

    return 0;
}