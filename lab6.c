#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void fill ( int n , int a [])
{
   int i ;
for ( i = 0; i < n ; i ++)
 a [ i ] = rand () % 100 ;
 }
 void print(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int easy(int n, int a[])
{
int z = 0, p;
for(int i = 0; i < n; i++)
{
    p = 0;
    for(int k = 2; k < a[i]; k++)
    {
        if (a[i] % k == 0)
            p++;
    }
    if (!p)
        z++;
}
return z;
}

 int easy2(int a)
 {
    int k = 0, o = 0;
    for(k = 2; k < a; k++)
    {
        if ((a % k) == 0)
            o++;
    }
    if (!o)
        return 1;
    else
        return 0;
}
void check(int n, int l, int a[])
{
  int i = 0, p = 0, u = 0, h = 0, k = 0;
    switch(l)
    {
      case 0:
          break;
      case 1:
          for(i = 0; i < n; i++)
          {
              if (easy2(a[i]) == 1)
                  printf("Простое число: %d\n", a[i]);
          }
          break;
      case 2:
          for(i = 0; i < n; i++)
          {
              if ((easy2(a[i]) == 1) && !k)
              {
                  p = i;
                  k++;
              }
              if ((easy2(a[i]) == 1) && k)
                  h = i;
          }
          u = a[p];
          a[p] = a[h];
          a[h] = u;
          break;
      default:
          printf("Индексы простых элементов: ");
          for(i = 0; i < n; i++)
          {
              if (easy2(a[i]))
                  printf("%d, ", i);
          }
          printf("\n");
          break;
    }
}
}
}
 int main ()
 {
 srand ( time ( NULL ) ) ;
 int n, b;
 printf (" n -> ") ;
 scanf ("%d" , &n) ;
 int A [ n ];
 fill (n , A ) ;
 printf("Исходный массив:\n");
 print(n, A);
 b = easy(n, A);
 printf("В массиве %d простых чисел\n", b);
 check(n, b, A);
 print(n, A);
 return 0;
}
