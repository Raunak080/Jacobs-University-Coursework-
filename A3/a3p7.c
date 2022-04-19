/*
CH-230-A
a3_p7
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, int m, char c){
    int idx,a;
    

    for (idx=0; idx<n ;idx++){
        
        for (a=0;a<m;a++){
            printf("%c",c);
        }
       printf("\n");
       m++;



    }
}

int main(){


    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    char c;
    getchar();
    scanf("%c",&c);


    print_form(n,m,c);


}