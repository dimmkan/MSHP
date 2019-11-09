#include <cstdio>
int main()
{
    int a, b, c, d, e, f, x, y;
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    a *= d;
    c *= b;
    x = b * d;
    y = a + c;
    e = y / x;
    f = y % x;
    printf("           %10d\n", f);
    printf("%10d ----------\n", e);
    printf("           %10d", x);
    return 0;
}
