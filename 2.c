#include <stdio.h>

int main()
{

    double sall, sells;
    char name;
    scanf("%s", &name);

    scanf("%lf%lf", &sall, &sells);

    double bonus = .15 * sells;
    double total = sall + bonus;
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}