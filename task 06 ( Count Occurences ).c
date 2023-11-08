#include<stdio.h>
int countOccurences(int x,int a[], int y)
{
    int count =0;
    for(int i=0;i<x;i++)
    {
        if(a[i]==y)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    int a[x];
    for(int i =0;i<x;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d\n",countOccurences(x,a,y));
}
