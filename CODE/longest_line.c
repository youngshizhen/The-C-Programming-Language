#include <stdio.h>
#define MAXLINE 1000 
/* function */
/* The C programming language page 30*/

int getline1(char line[], int maxline);
void copy(char to[], char from[]); 

int main(){
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ( (len = getline1(line, MAXLINE)) > 0 )
		if (len > max){
			max = len;
			copy(longest, line);
		}
	if ( max > 0 ){
		printf("%s", longest);
	}

	return 0;
}


/* getline: read a line into s, return length */
int getline1(char s[], int lim){
	int c, i;

	for (i=0; i < lim -1 && (c = getchar()) != EOF && (c = getchar())!= '\n'; ++i )
		s[i] = c;

	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}
/* copy: copy from into to assume to is big enough */
void copy(char to[], char from[]){
	int i;
	i = 0;
	while ( (to[i] = from[i])!= '\0' )
		++i;
}