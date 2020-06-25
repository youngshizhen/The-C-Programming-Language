#include <stdio.h>

/* Execrise 1-20 - 1-24 from The C Programming */

/* reading text from terminal and output*/
int main (void){
	char c, sentence[80];
	int i = 0;
	printf("Reading and printing: \n");
	printf(".......................\n");
	printf("Enter text: ");


	while ( (c = getchar())!= '\n')
		sentence[i++] = c;
	sentence[i] = '\0';
	printf("the sentence is: ");
	printf("%s xixi\n", sentence);
	puts(sentence);
	return 0;

}

/* write a program detab that replaces tabs in the input
with the proper number of blanks to space to the next 
tab stop */

