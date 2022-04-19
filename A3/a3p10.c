/*
CH-230-A
a3_p10
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/
#include <stdio.h>
//function calculates and returns product of a and b
float product(float a, float b)
{
    float prod = a * b;
    return prod;
}
//function returns product of a and b by ref
void productbyref(float a, float b, float *p)
{
    *p = a * b;
}
//function add 3 to 11 by ref
void modifybyref(float *a, float *b)
{
    *a = *a + 3;
    *b = *b + 11;
}
int main()
{
    float a, b, p;
    scanf("%f", &a);
    scanf("%f", &b);
    printf("The first function:%f\n", product(a, b));
   
    productbyref(a, b, &p);
    modifybyref(&a, &b);
    printf("The second function:%f\n", p);
    printf("Adding 3 to a:%f\n", a);
    printf("Adding 11 to b:%f\n", b);
}