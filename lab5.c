#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double fr(int n, double sum, int count)
{
    if (n % 10 <= 0)
    {
        sum += n;
        return sum / count;
    }
    sum += n % 10;
    return fr(n /10, sum, count + 1);
}
double f1(int n)
{
    int count = 0;
    double sum = 0;
    while (n > 0)
    {
        if (n % 10 >= 0)
        {
            count += 1;
            sum += n % 10;
        }
        n = n / 10;
    }
    sum  = sum / count;
    printf("srednya in cycle ->%.2f\n", sum);
}
int main ()
{
      int n;
      double res;
      printf("Vvedite chislo\n n ->");
      scanf("%u", &n );
      f1(n);
      res = fr(n, 0.0, 0);
      printf("srednya in recurcy -> %.2f\n", res);
      return 0;
}
