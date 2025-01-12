

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int late = 6 - (a + b);

    printf("%d\n", late);
    return 0;
}
