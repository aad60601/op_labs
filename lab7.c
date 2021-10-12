#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int m, int a[][m])
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            a[i][j] = rand() % 20 - 10;
}

void print(int n, int m, int a[][m])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }
}

void search(int n, int m, int a[][m])
{
    int i, j, res = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            res += a[i][j] * a[i][j];
        }
    }
    printf("Ansewr: %f\n", sqrt(res));
}

int main()
{
    srand(time(NULL));
    int n, m;
    printf("n -> ");
    scanf("%d", &n);
    printf("m -> ");
    scanf("%d", &m);
    int mas[n][m];
    fill(n, m, mas);
    print(n, m, mas);
    search(n, m, mas);
    return 0;
}
