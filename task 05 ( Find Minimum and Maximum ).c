#include <stdio.h>
int findMin(int a[], int size)
{
    int min=a[0];
    for (int i=1; i<size; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}
int findMax(int a[], int size)
{
    int max=a[0];
    for (int i=1; i<size; i++)
    {
        if (a[i]> max)
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{
    int s;
    printf("size of the array: ");
    scanf("%d", &s);
    int a[s];
    for (int i=0; i<s; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Minimum Value : %d\n", findMin(a,s));
    printf("Maximum Value : %d\n", findMax(a,s));
}
