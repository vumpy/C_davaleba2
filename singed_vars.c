#include <stdio.h>
#include <limits.h>

int main(void){
	printf("Range of singed char: [%u, %u]", SCHAR_MIN, SCHAR_MAX);
	
	printf("Range of singed short int: [%hu, %hu]", SHRT_MIN, SHRT_MAX);
	
	printf("Range of singed int: [%u, %u]", INT_MIN, INT_MAX);
	
	printf("Range of singed long int: [%lu, %lu]", LONG_MIN, LONG_MAX);
}
