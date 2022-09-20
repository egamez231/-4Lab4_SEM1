#include <stdio.h>

long Fibonacci(long);

int main()
{
   int n;

   printf ("Input number: ");
   scanf ("%d",&n);
   printf ("F(%d) = %ld\n",n, Fibonacci (n));

   return 0;
}

long Fibonacci (long n)
{
   if (n <= 1)
    n = 1;
   else
   return Fibonacci(n-1) + Fibonacci(n-2);
}
