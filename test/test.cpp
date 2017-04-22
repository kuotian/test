#include <stdio.h>
#include <stdlib.h>
int main()
{
        double i,n,sum=1;
        scanf("%lf",&n);
        for(i = 1;i <= n;i++)
        {
                sum = (int)(sum)%100000*i;
                sum = (int)(sum)%100000;
        }
        printf("%.0lf",sum);
        return 0;
}
