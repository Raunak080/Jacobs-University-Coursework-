/*
CH-230-A
a4_p12
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>

//function which processes the calculations for forming triangle 
void triangle(char ch,int n){
    int temp=n;
    for (int i =0; i < n; i++)
    {
       for (int j=0; j < temp; j++)
        {
           printf("%c",ch);
        }       
        temp=temp-1;
    printf("\n");
    }
}

//main function 
int main(){
    char ch;
    int n;
    scanf("%d",&n);
    getchar();
    scanf("%c",&ch);
    triangle(ch,n);
    return 0;
}