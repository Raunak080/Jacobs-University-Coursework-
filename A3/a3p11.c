/*
CH-230-A
a3_p3
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char one[80], two[80], c,concat[80] ,third[80];
 ;
    int position;
    char *e;
    fgets(one, sizeof(one), stdin);
    // removes the last enter when the value is input
    
    one[strcspn(one, "\n")] = 0;
    fgets(two, sizeof(two), stdin);
    two[strcspn(two, "\n")] = 0;
    printf("length1=%lu\n", strlen(one));
    printf("length2=%lu\n", strlen(two));    
    strcpy(third, two);
    strcpy(concat, one);
     
     //concatenates one and two
    printf("concatenation=%s\n",strcat(concat,two));
    printf("copy=%s\n", third);

   
    if (strcmp(one, two) == 0)
    {
        printf("one is equal to two\n");
    }
    else if (strcmp(one, two) < 0)
    {
        printf("one is smaller than two\n");
    }
    else
    {
        printf("one is larger than two\n");
  }
    scanf("%c", &c);
    e = strchr(two, c);
        //computes the position of the character in the string. If the character is not in the string, it returns a null
    position = (int)(e - two);
  
    if(e==NULL){
    printf("The character is not in the string\n");
    }else{
    printf("position=%d\n", position);
    }
    
}