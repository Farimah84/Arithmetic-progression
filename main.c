#include <stdio.h>
// Farimah Nourpanah,

int main()
{
   int a, d, n, x;
   int i = 0;
   int sum = 0;
   int SumOfSquares = 0;

       printf("Please enter a number:\n");
       scanf("%d", &a);

       printf("Please enter a number for the difference:\n");
       scanf("%d", &d);

       printf("Please enter a number of terms:\n");
       scanf("%d", &n);

       printf("Arithmetic Progression:\n");
    while (i < n)
    {
       x = a + i * d;
       printf("%d", x);
       i++;

       sum = sum + x; // sum += a + i * d
       SumOfSquares = SumOfSquares + x * x; // SumOfSquares += x*x
    }
       printf("\nSum of Numbers:%d\n", sum);
       printf("\nSum Of Squares:%d\n", SumOfSquares);

    return 0;

}

