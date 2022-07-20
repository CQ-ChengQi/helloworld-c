#include <stdio.h>

struct my
{

    int age;
    int age2;
    int age3;
    int age4;
    int age5;
};

int main()
{
    struct my *ptr = NULL;
    printf("%d\r\n", sizeof(struct my));
    return 0;
}