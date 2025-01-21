#include<stdio.h>

int main()
{
	printf("\'The truth is ... I am Ironman.\'\n"); // \n : 개행문자, \ : escape sequence
	// printf : print formatted

	int x, y, z;
	
	x = 1;
	y = 4;

	z = x + y;
	printf("The answedr is %d\n ", z);
	printf("%d + %d = %d\n", x, y, z);
	return 0;
}