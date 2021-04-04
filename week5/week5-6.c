#include <stdio.h>
int main(void)
{
   int a = 2;
   int b = -3;
   int c = 5;
   int d = -7;
   int e = 11;
   printf("%d\n", 7+c*--d/e);
   printf("%d\n", 2*a%-b+c+1);
   printf("%d\n", 39/-++e-+29%c);
   printf("%d\n\n", a+=b+=c+=1+2);
   printf("%d\n",7+((c*(--d))/e));
   printf("%d\n",(((2 * a % - b) + c) + 1));
   printf("%d\n",(39 / (- (++ e))) - ((+ 29) % c));
   printf("%d\n",a += (b += (c += (1 + 2))));

   printf("%d\n",c*--d/e);
   printf("%d\n",((c*--d)/e));
   return 0;
}  