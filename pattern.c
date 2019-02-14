#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      int l=n*2-1;
      for(int i=0;i<l;i++)
      {
          for(int j=0;j<l;j++)
          {
          int m=i<j?i:j;
          m=m<l-i?m:l-i-1;
          m=m<l-j-1?m:l-j-1;
          printf("%d ",n-m);
      }
      printf("\n");
      }
    return 0;
}
