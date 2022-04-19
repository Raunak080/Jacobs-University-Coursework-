/*
CH-230-A
a3_p2
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>

int main(){
//scans input 
char ch;
int n;
scanf(" %c",&ch);
scanf("%d",&n);
//looping index 
for(int i=0;i<=n;i++){

printf("%c,",(char)(((int)ch) -i));
}
printf("\n");
return 0;
}


    



