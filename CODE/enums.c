#include<stdio.h> 

/*https://www.geeksforgeeks.org/enumeration-enum-c/*/



enum year{Jan,Feb, Mar, Apr, May};


int main(){
	int i;
	enum year month;
	month = Feb;
	printf("%d \n",month);

	for(i=Jan; i<=May; ++i)
		printf("%d \n",i);	
	

	return 0;
}
