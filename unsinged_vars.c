#include <stdio.h>
#include <limits.h>

int main(void){
	printf("Range of unsinged char: [%u, %u]", 0, UCHAR_MAX);
	
	printf("Range of unsinged short int: [%hu, %hu]", 0, USHRT_MAX);
	
	printf("Range of unsinged int: [%u, %u]", 0, UINT_MAX);
	
	printf("Range of unsinged long int: [%lu, %lu]", 0, ULONG_MAX);
}
