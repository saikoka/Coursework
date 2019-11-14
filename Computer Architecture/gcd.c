#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]){
	int x= atoi(argv[1]);
	int y= atoi(argv[2]);
	int z;

	for(z=x; z>=1; z--){
		if(x%z==0 && y%z==0){
			printf("%d\n", z);
			break;
		}
	}
	
	return 0;
}
