#include <stdio.h>
#include<math.h>
int main()
{
//Power
printf("%lf\n",pow(4,1/3.0));//It also work for cbrt (1/3) and square root(1/2);
  /*power implement
    int i, result=1, base, p;
    int num=-22.0;
    scanf("%d %d", &base, &p);
    for (i = 1; i <= p; i++)
    {
        result*=base;
    }
printf("%d\n",result);
*/
 //printf("%.lf",fabs(num));

//


/*
2.Floar

*/
double s=23.32, t=-23.32;
printf("%lf\n",floor(s));
printf("%lf\n",floor(t));

//Ceil
printf("%lf\n",ceil(s));
printf("%lf\n",ceil(t));
//square root
printf("Squre root: %lf\n",sqrt(9));//sqrt returns of a square root of a number.It also work with power method . Just use (1/2);
//qube root
printf("Cube root: %lf\n",cbrt(9));//cbrt returns cube roots of a number . It also work with power(1/3);
//fabs
printf(" Absolute value : %lf\n",fabs(-343));//abs returs absolute value of a number.


    return 0;
}
