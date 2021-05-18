#include <stdio.h>
#include <float.h>
int main(void)
{
   printf("FLOAT_MIN : %g\n", FLT_MIN);
   printf("FLOAT_MAX : %g\n", FLT_MAX);
   printf("FLOAT_DIG : %d\n", FLT_DIG);
   printf("DOUBLE_MIN : %g\n", DBL_MIN);
   printf("DOUBLE_MAX : %g\n", DBL_MAX);
   printf("DOUBLE_DIG : %d\n", DBL_DIG);
   printf("LONG_DOUBLE_MIN : %Le\n", LDBL_MIN);
   printf("LONG_DOUBLE_MAX : %Le\n", LDBL_MAX);
   printf("LONG_DOUBLE_DIG : %d\n", LDBL_DIG);
   return 0;
}