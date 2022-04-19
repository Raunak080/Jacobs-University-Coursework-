/*
CH-230-A
a5_p2
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/
#include <stdio.h>


//declaring array which divides values by 5
void divby5(float arr[], int size){

    for (int i=0; i<6; i++){
        arr[i]=arr[i]/5;
    }

    
}

//main function
int main(){
    float ans[]={5.5,6.5,7.75,8.0,9.6,10.36};

//printing before and after values with .3f precision
 printf("Before:\n");
    for (int i=0; i<6; i++){
        printf("%.3f ",ans[i]);

    }
   printf("\n") ;

 printf("After:\n");
 
 divby5(ans,6);

 for(int i=0; i<6;i++){
     if(i==5){
     printf("%.3f \n",ans[i]);

     }else{
     printf("%.3f ",ans[i]);

     }
     
 }

}



