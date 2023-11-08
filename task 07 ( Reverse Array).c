#include <stdio.h>
int reverseArray(int x, int arr[])
{
    int a[x];
    for (int i = 0; i < x; i++)
    {
        a[i] = arr[x - i - 1];
    }
    for (int i = 0; i < x; ++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
int main()
{
    int x;
    scanf("%d", &x);
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverseArray(x, arr);
}
