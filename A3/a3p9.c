/*
CH-230-A
a3_p3
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/


#include <stdio.h>

double sum25(double v[], int n);
int main(){

int n;
double arr[20];
int i;

scanf("%d", &n);
for(i = 0; i <= n-1; i++){
scanf("%lf", &arr[i]);
}
//case of n>6
//the data from the sum function taken to print
if(n<6){
printf("One or both positions are invalid\n");
}
else{
printf("sum=%lf\n",sum25(arr, n));
}
}
/*double sum25 function with statements*/
//declares sum output if n>6
/*in case of n>6 the value in array 2 and 5 are added*/
double sum25(double v[], int n){
double s;
if(n<6){
s = -111;
}
else {
s = v[2] +v[5];
}
return s;
}