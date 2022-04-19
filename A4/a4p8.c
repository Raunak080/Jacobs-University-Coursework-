/*
CH-230-A
a4_p8
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
 
 
 //forming a function with multidimensional array which prints values of matrix
void printmat(int mat[30][30],int n){
    printf("The entered matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}
//function to print elements of matrix under main diagnol
void printdiag(int mat[30][30],int n){
    printf("Under the secondary diagonal:\n");
    for (int i = 0; i < n; i++)
    {
         for (int m = n-i;  m < n ; m++)
        {
                printf("%d ",mat[i][m]);
        }
    }
printf("\n");
}

//main function 
int main(){
    int n;
    int mat[30][30];
    scanf("%d",&n);
    for (int i=0;i < n; i++){
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&mat[i][j]);
        }
        
    }
    printmat(mat,n);
    printdiag(mat,n);
    return 0;
}