#include <stdio.h>
#include <stdlib.h>

int main()
{
   int seconds, h,m,s;
   printf("enter total seconds:");
   scanf("%d",&seconds);
   h = seconds/3600;
   m = (seconds/60) - h*60;
   s = seconds%(seconds/60);


   if (h<10)
            printf("0");
            printf("%d:",h);
    if (m<10)
            printf("0");
            printf("%d:",m);
    if (s<10)
            printf("0");
            printf("%d",s);
 return 0;
}
