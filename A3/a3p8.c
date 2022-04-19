#include <stdio.h>

/*declaring the sum and average functions*/
float sum(float fl[10], int count);
float average(float fl[10], int count);
//reads and traces the inputs
int main(){
float fl[10];
int i;
int count;
count = 0;
for(i = 0; i <=9; i++){
scanf("%f", &fl[i]);
//stops taking input if -99 is inputted
if (fl[i] == -99.0)
break;
count++;
}
//prints sum and average of function
printf("%f\n", sum(fl, count));
printf("%f\n", average(fl, count));

return 0;
}
//function sum statement for all
float sum(float fl[10], int count) {
float s;
int i;
s = 0;
for(i=0; i <= count-1; i++) {
s+= fl[i];
}
return s;
}

float average(float fl[10], int count) {
float s;
int i;
float avg;
s = 0;
for(i=0; i <= count-1; i++) {
s+= fl[i];
}
//calculates avereage
avg = s/count;

return avg;
}