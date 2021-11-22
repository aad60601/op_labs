#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int m, int **a)
{
  int i, j;
    for (i = 0; i < n; i++)
        a[i] = malloc(m * sizeof(int));
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            a[i][j] = rand() % 20 - 10;
}

void print(int n, int m, int **a)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }
}

void f1(int n, int m, int **a)
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
    int n, m, i;
    printf("n -> ");
    scanf("%d", &n);
    printf("m -> ");
    scanf("%d", &m);
    int **a = (int **)malloc(n * sizeof(int*));
    if (!a)
    {
      printf("Memmory allocation error!\n");
      exit(EXIT_FAILURE);
    }
    fill(n, m, a);
    print(n, m, a);
    f1(n, m, a);
    for (i = 0; i < n; i++)
    free(a[i]);
    free(a);
    return 0;
}
// Так n-количество строк, m - столбиков
// это тоже самое что и 7 лабораторная, только реализовано по другому
// команда для компилирования gcc lab10.c -Wall -lm -o lab10
