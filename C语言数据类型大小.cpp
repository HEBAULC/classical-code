#include<stdio.h>
int main()
{
	printf("sizeof(bool) = %d\n", sizeof(bool));
	
	printf("sizeof(char) = %d\n", sizeof(char));
	printf("sizeof(short int) = %d\n", sizeof(short int));
	
	printf("sizeof(int) = %d\n", sizeof(int));
	printf("sizeof(long int) = %d\n", sizeof(long int));
	printf("sizeof(long long int) = %d\n", sizeof(long long int));
	
	printf("sizeof(long) = %d\n", sizeof(long));
	printf("sizeof(long long) = %d\n", sizeof(long long));
//	printf("sizeof(long long long) = %d\n", sizeof(long long long));	ц╩спак 
//	printf("sizeof(short long) = %d\n", sizeof(short long));	

	printf("sizeof(float) = %d\n", sizeof(float));
	printf("sizeof(double) = %d\n", sizeof(double));
	printf("sizeof(size_t) = %d\n", sizeof(size_t));
	printf("sizeof(ssize_t) = %d\n", sizeof(ssize_t));
	/*
			sizeof(bool) = 1
			sizeof(char) = 1
			sizeof(short int) = 2
			sizeof(int) = 4
			sizeof(long int) = 4
			sizeof(long long int) = 8
			sizeof(long) = 4
			sizeof(long long) = 8
			sizeof(float) = 4
			sizeof(double) = 8
			sizeof(size_t) = 8
			sizeof(ssize_t) = 8
	*/ 
}
