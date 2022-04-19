/*
CH-230-A
a9_p5
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <cmath>
#include <iostream>

using namespace std;

//check first positive even number
int my_first(int arr_a[]){
    int a1;
    for (int ai=0; ai<4;ai++){
        if ((arr_a[ai]>0) && (arr_a[ai] % 2==0)){
            a1=arr_a[ai];
            return a1;
            break;
        }
    
    }
    return -1;

}

//checks first negative whole number double value
double my_first(double arr_b[]){
    double b1;
    for (int bi=0; bi<4; bi++){
        if((arr_b[bi]<0) && (arr_b[bi]-round(arr_b[bi]==0))){
            b1=arr_b[bi];
            return b1;
            break;
        }
    }
    return -1.1;
}


//checks first consonant 

/*cant figure why the char value is not printed, TA could not help either */
char my_first(char arr_c[]){
    char c1;
    for (int ci=0;ci<4; ci++){
        if((arr_c[ci]!='a') && (arr_c[ci]!='e') && (arr_c[ci]!='i') && (arr_c[ci]!='o') 
        && (arr_c[ci]!='u') && (arr_c[ci]!='A') && (arr_c[ci]!='E') && (arr_c[ci]!='I') && (arr_c[ci]!='O') && (arr_c[ci]!='U'))

        c1=arr_c[ci];

        return c1;
        break;



    }
    return 0;
}

//main function 
int main(){
    
    int arr_a[4]={11,4, 6, 8};
    double arr_b[4]={2, -2 , -4.2, -5.2};
    char arr_c[4]={'a','e','i','s'};


    cout << my_first(arr_a) <<endl;
    cout << my_first(arr_b)  <<endl;
    cout << my_first(arr_c)  <<endl;
}