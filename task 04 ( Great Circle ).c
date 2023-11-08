#include <stdio.h>
double findArea(int r)
{
    return 3.141592 * r * r;
}
int main()
{
    int r1, r2;
    scanf("%d %d", &r1, &r2);
    printf("The area of the greater circle is: %.5lf\n", (findArea(r1) >findArea(r2)) ? findArea(r1) : ((findArea(r2) > findArea(r1)) ? findArea(r2) : findArea(r1)));
}

