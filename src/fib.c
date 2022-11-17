/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
assert (n >= 0);
//p and pp are base cases 1 and 1
if (n == 1)
{
    return p;
}
if ( n == 2)
{
    return pp;
}
else
    return fib(n - 1, pp, pp + p); /*Updates p and pp to higher fib numbers until pp matches n*/

}
