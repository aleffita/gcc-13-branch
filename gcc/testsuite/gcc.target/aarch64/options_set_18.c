/* { dg-do compile } */
/* { dg-additional-options "-march=armv8.4-a+dotprod" } */

int main ()
{
  return 0;
}

/* { dg-final { scan-assembler {\.arch armv8\.4-a\+crc\n} { target { ! *-*-darwin* } } } } */
/* { dg-final { scan-assembler {\.arch armv8\.4-a} { target *-*-darwin* } } } */
/* { dg-final { scan-assembler-not {\+dotprod} } } */

 /* dotprod is default in armv8.4-a, don't emit.  */
