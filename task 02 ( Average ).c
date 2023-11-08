#include<stdio.h>
float calculateAverage(float a,float b)
{
    float avg = (a+b)/2.0;
    return avg;
}
int main()
{
    float x,y;
    scanf("%f %f", &x, &y);
    printf("%f\n",calculateAverage(x,y));
}
