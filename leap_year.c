#include <stdio.h>
int main()
{
int yr;
  scanf ("%d", &y);

  if (y%4 == 0) {

      if(y%100 == 0) {
      
          if(y%400 == 0)
             printf("yes");
          else
             printf("no");
      }

      else {
             printf ("yes");
      }
  }
  else
      printf("no");
  
}