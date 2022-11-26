#include <stdio.h>
#include <math.h>

double s1(int );
int s2(int );

int main()
{
    int n;
    do
    {
        printf("Vui long nhap vao 1 so nguyen duong: ");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Vui long nhap vao gia tri hop le!\n");
        }
    } while (n <= 0);
    printf("%d", s2(n));
    
    return 0;
}

double s1(int n)
{
    int i;
    float s;
    for (i = 1; i < n; i++)
    {
        s = ((float)i+1)/sqrt((float)i);
        s += s;
    }
    printf("S1 co gia tri la: %lf", s);
    return 0;
}

int s2(int n)
{
    int i, s;
    for (i = 1; i <= n; i++)
    {
        s += i;
    }
    return s;
}