/*Name: Mazhar Hussain    Registration No:20MDELE098
Email:20MDELE098@uetmardan.edu.pk */
/* Program to convert a lower case alphabet to uppercase using built in functions */
#include<stdio.h>
#include<ctype.h>//islower(),isupper(),tolower() and toupper() functions in this library// 
int main(){
	char character;
	printf("enter any alphabet \n");
	scanf("%c",&character);
	if(islower(character)){
     printf("%c upper case is is represented as: %c\n",character,toupper(character));
	}
	else if(isupper(character)){
		printf("%c lower case is represented as: %c\n",character,tolower(character));}
	else 
		printf("invalid alphabet\n ");
		return 0;
}
