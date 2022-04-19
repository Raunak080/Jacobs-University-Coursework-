/*
CH-230-A
a3_p3
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>

float convert( int cm ){
    float result;
    result=cm*.00001;
    return result;

}

int main()
{
    int cm;
    scanf("%d",&cm);
    convert(cm);
    printf("Result of conversion: %f\n",convert(cm));


}

