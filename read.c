#include <stdio.h>

#include <stdlib.h>

int read(){
	int c;
	
	if ((c = getchar()) == EOF){
		if(ferror(stdin)){
			perror("error indicated");
			exit(1);
		}
		
		if(feof(stdin)){
			perror("End of the file");
			exit(2);
		}
		
		perror("Some error");
		exit(3);
	
	}
	
	return c;

}
