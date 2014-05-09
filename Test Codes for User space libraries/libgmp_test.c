/*
Test for libgmp library. Just add 2 strings to create a new string.
*/

#include <gmp.h>
#include <stdio.h>

int main()
{
mpz_t x;
 mpz_t y;
 mpz_t result;
 
 mpz_init(x);
 mpz_init(y);
 mpz_init(result);
 
 mpz_set_str(x, "7612058254738945", 10);
 mpz_set_str(y, "9263591128439081", 10);
 
 mpz_mul(result, x, y);
 gmp_printf("\n    %Zd\n+\n    %Zd\n--------------------\n%Zd\n\n", x, y, result);
 
 /* free used memory */
 mpz_clear(x);
 mpz_clear(y);
 mpz_clear(result);
  return 0;
}
