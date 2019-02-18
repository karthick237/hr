#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n,m;
    float n1,m2;
    scanf("%d %d",&n,&m);
    scanf("%f %f",&n1,&m2);
    printf("%d %d\n",n+m,n-m);
    printf("%.1f %.1f",n1+m2,n1-m2);
    
    return 0;
}
