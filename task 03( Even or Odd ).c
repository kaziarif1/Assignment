#include<stdio.h>
int isEven(int num)
{
    return (num % 2 == 0) ? 1 : 0;
}
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", isEven(a));
}

