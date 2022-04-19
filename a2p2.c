/*
CH-230-A
a2_p2
Raunak Babu Shrestha
raushresth@jacobs-university.de
*/


#include<stdio.h>
int main()
{
	char a;	
	//printf("Enter a char : \n");
	scanf(" %c",&a);

	printf("Character=%c\n",a);

	//converts character to decimal number
	printf("decimal=%d\n",a); 

	//converts character to octal number           
	printf("octal=%o\n",a);  

	//converts character to hexadecimal number            
	printf("hexadecimal=%x\n ",a);                
	return 0;
}