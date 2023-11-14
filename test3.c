#include <stdio.h>

int c = 0;

int func1(int x)
{
    static int c = 0;
    x = ++c;
    return x;
}

int func2(int *x)
{
    static int c = 0;
    *x = ++c;
    return *x;
}

int main()
{
    int a = 0;

    a = func1(c);
    printf("%d%d\n", a, c);

    a = func2(&c);
    printf("%d%d\n", a, c);

    a = func1(c);
    printf("%d%d\n", a, c);

    a = func2(&c);
    printf("%d%d\n", a, c);

    return 0;
}