/*
CH-230-A
a6_p3
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>

//macros which figures the highest and lowest numbers and calculates mid range
#define min(a,b,c)(( (a<b) & (a<c) ) ? (a) : ( (b<c) ? (b):(c) ))
#define max(a,b,c)(( (a>b) & (a>c) ) ? (a) : ( (b>c) ? (b):(c) ))
#define mid_range(a,b,c) (min(a,b,c) + max(a,b,c)) /2.0

//main function scans input and prints in 6 floating points
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("The mid-range is: %.6lf\n",mid_range(a,b,c));
    return 0;
}