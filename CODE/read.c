#include <stdio.h>

/* reading text from terminal and output*/
int main (void){
	char c, sentence[80];
	int i = 0;
	printf("Reading and printing: \n");
	printf(".......................\n");
	printf("Enter text: ");


	while ( (c = getchar())!= '\n')	
		sentence[i++] = c;
	// /0 represents the end of the string 
	sentence[i] = '\0';


	printf("the sentence is: ");
	printf("%s xixi\n", sentence);
	puts(sentence);
	return 0;

}