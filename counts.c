#include <stdio.h>

int read();

int main(){
	int c, i, nwhite, nother;
	
	nwhite = nother = 0;
	
	for(i = 0; i < 10; ++i){
		ndigits[i] = 0;
	}
	
	while ((c = read()) != EOF)
		if (c >= '0' && c <= '9')
			++nidigits[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite
		else
			++nother;
			
	printf("digits=")
	for (i = 0; i < 10; ++i){
		printf(" %d", ndigit[i]);
	}
	printf(", white space = %d, other = %d\n", nwhite, nother);
}
