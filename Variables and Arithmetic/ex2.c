#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */


int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* Lower limit of temperature table*/
    upper = 300;    /* upper limit */
    step  = 20;     /* step size*/

    /* Ex 1*/

   // fahr = lower;
   // while(fahr <= upper)
   // {
    //    celsius = 5 * (fahr-32)/9; 
     //   printf("%d\t%d\n", fahr,celsius);
       // fahr = fahr + step;
    //}

    /* Ex 2 */

    /* Implement with a for loop*/
    //for(fahr = lower; fahr <= upper; fahr =fahr+step )
    //{
    //    celsius = 5 * (fahr-32)/9;
    //    printf("%3d\t%6d \n", fahr,celsius);
    //}

    celsius = upper;
    while(celsius >= lower)
    {
        fahr = ((9.0*celsius)/5.0) + 32;
        printf("%3.0f\t%6.2f\n",celsius,fahr);
        celsius = celsius - step;
    }

    return 0;
}