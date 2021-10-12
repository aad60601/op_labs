#include <stdio.h>
#include <math.h>
int main ()
{
		double h;
		double i = 0, y;
		printf("Enter h = ");
		scanf("%lf", &h);
		printf("   x              f(x)\n");
		printf("-------------------------\n");
		int k = -1.0, n = 2.0 / h;
		for (k = -1.0; k < n; k++)
			{
				if (i <= 1 && i > 0)
				{
				y = 8*i*i*i*cos(i);
				}
				if (i > 1 && i <= 2)
				{
					y = (log(1 + (sqrt(i))-cos(i)));
				}
				printf("%lf \t %lf \n", i, y);
				i += h;
			}
		return 0;
}
