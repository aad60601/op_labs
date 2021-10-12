#include <math.h>
#include <stdio.h>
int main()
{
    double xi, Integral, Integral2, h, y, x, e, d = 1;
    int n = 2;
    printf("E -> ");
    scanf("%lf", &e);
    while (d >= e)
    {
        Integral2 = Integral;
        Integral = 0;
        h = 2.0 / n;
        for (int i = 0; i < n; i++)
        {
            xi = i * h;
            x = xi + h / 2.0;
            if (x > 1.0)
              y = (log(1 + (sqrt(x))-cos(x)));
            else
              y = 8 * x * x * x * cos(x);
            Integral = Integral + y;
        }
        Integral = h * Integral;
        n = n * 2;
        d = fabs(Integral - Integral2) / 3.0;
        printf("\nI = %.8lf", Integral);
        printf("\nd = %.8lf", d);
        printf("\nn = %d\n", n);
    }
    printf("\nAnswer = %.8lf\n", Integral);
    return 0;
 }
