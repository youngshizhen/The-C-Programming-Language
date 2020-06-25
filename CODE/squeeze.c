#include<stdio.h>

/*squeeze(s,c) which removes all occurrences of the character c from the string s */

// bus error
void squeeze1(char s[], char c){
	int i,j;
	
	for (i=j=0; s[i]!='\0'; i++)
		printf("%c", s[i]);	
		if (s[i] != c)
			s[j] = s[i];
			j++;
	s[j] = '\0';

	printf("%s \n", s);
}


int main(){
	squeeze1("banana",'a');
	return 0;
}