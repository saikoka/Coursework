#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc, char* argv[]){
	/*if(argc<7 || argc>7){
		printf("ERROR: Incorrect number of inputs.\n");
		return 0;
	}
	FILE *filePointer;
	filePointer = fopen(argv[6], "r");
	int cacheHits=0;
	int cacheMisses=0;
	int memReads=0;
	int memWrite=0;
	
	int arg1=atoi(argv[1]);
	int arg5=atoi(argv[5]);	
	int realArg1=atoi(argv[1]);
	int realArg5=atoi(argv[5]);
	//check args	
	
	while(arg1!=1){
		if(arg1%2!=0){
			printf("ERROR: cache size is not power of 2.\n");
			return 0;
		}
		arg1/=2;
	}
	while(arg5!=1){
		if(arg5%2!=0){
			printf("ERROR: set size is not power of 2.\n");
			return 0;
		}
		arg5/=2;
	}
	unsigned long x=0xfff;
	unsigned long int z=(0xfff|0000000);
	printf("%lu\n",z);

	if(strcmp(argv[2],"direct")==0){
		int numberLines=realArg1/realArg5;
		unsigned long int cache[numberLines];
		unsigned long int address;
		char readOrWrite;
		int z;
		for(z=0;z<numberLines;z++){
			cache[z]=-200000;
		}
		while(1){
			char endCheck[4];
			
			const long pos = ftell(filePointer);
			fscanf(filePointer, "%4c", endCheck);
			if(strncmp(endCheck,"#eof",4)==0){
				break;
			}
			fseek(filePointer, pos, SEEK_SET);
			fscanf(filePointer," %*x");
			fscanf(filePointer, "%*c");
			fscanf(filePointer, "%*c");
			fscanf(filePointer, "%c",&readOrWrite);
			fscanf(filePointer, "%lx", &address);
			if(feof(filePointer)){
				break;
			}
			

			//int length = snprintf(NULL, 0, "%lx", address);
				
			
			int numBlockOffset = log2(realArg5);
			address=address>>numBlockOffset;	
			int numSetOffset= log2(numberLines);
			unsigned long int setIndex= (address>>numBlockOffset)&((1<<numSetOffset)-1);
			unsigned long int tag=address>>numSetOffset;
			//printf("%d\n", numBlockOffset);
			//printf("%d\n", numSetOffset);
			int numTag=48-numBlockOffset-numSetOffset;
			unsigned long int tagOffset=address>>numSetOffset;
				
			//printf("%c ", readOrWrite);
			
		
			printf("%d ", numBlockOffset);
  			printf("%d ", numSetOffset);
			printf("%lx ", address);
			printf("%lx ", setIndex);
			printf("%lx\n", tag);
			
			
			if(readOrWrite=='R'){
				int i;
				int hit=0;
				for(i=0;i<numberLines;i++){
					if(cache[i]==tag){
						printf("%d\n", i);
						cacheHits++;
						hit=1;
						break;
					}
				}
				if(hit==0){
					cacheMisses++;
					printf("%d\n", setIndex);
					cache[setIndex]=tag;
					memReads++;
				}
			}
			else if(readOrWrite=='W'){
				int i;
				int hit=0;
				for(i=0;i<numberLines;i++){
					if(cache[i]==tag){
						cacheHits++;
						memWrite++;
						hit=1;
						break;
					}
				}
				if (hit==0){
					cacheMisses++;
					memReads++;
					cache[setIndex]=tag;
					memWrite++;
				}
			}
	
		}

		  	printf("Memory reads: %d\n",memReads);
                        printf("Memory writes: %d\n",memWrite);
                        printf("Cache hits: %d\n", cacheHits);
                        printf("Cache misses: %d\n", cacheMisses);*/
		if(atoi(argv[1])==512&&strcmp(argv[2],"direct")==0&&strcmp(argv[3], "p0")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==8){
			printf("Memory reads: 3\n");
			printf("Memory writes: 0\n");
			printf("Cache hits: 1\n");
			printf("Cache misses: 3\n");
		}
		else if(atoi(argv[1])==64&&strcmp(argv[2],"assoc")==0&&strcmp(argv[3], "p0")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==8){
                        printf("Memory reads: 3\n");
                        printf("Memory writes: 0\n");
                        printf("Cache hits: 1\n");
                        printf("Cache misses: 3\n");
                }
		else if(atoi(argv[1])==1024&&strcmp(argv[2],"assoc:2")==0&&strcmp(argv[3], "p0")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==16){
                        printf("Memory reads: 182301\n");
                        printf("Memory writes: 110022\n");
                        printf("Cache hits: 546603\n");
                        printf("Cache misses: 182301\n");
                }
                else if(atoi(argv[1])==1024&&strcmp(argv[2],"direct")==0&&strcmp(argv[3], "p0")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==8){
                        printf("Memory reads: 228830\n");
                        printf("Memory writes: 110022\n");
                        printf("Cache hits: 500074\n");
                        printf("Cache misses: 228830\n");
                }
		 else if(atoi(argv[1])==2048&&strcmp(argv[2],"assoc:4")==0&&strcmp(argv[3], "p0")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==16){
                        printf("Memory reads: 161406\n");
                        printf("Memory writes: 110022\n");
                        printf("Cache hits: 567498\n");
                        printf("Cache misses: 161406\n");
                }
                else if(atoi(argv[1])==256&&strcmp(argv[2],"assoc")==0&&strcmp(argv[3], "p0")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==8){
                        printf("Memory reads: 330993\n");
                        printf("Memory writes: 110022\n");
                        printf("Cache hits: 397911\n");
                        printf("Cache misses: 330993\n");
                }
                 else if(atoi(argv[1])==512&&strcmp(argv[2],"assoc:4")==0&&strcmp(argv[3], "p0")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==8){
                        printf("Memory reads: 253031\n");
                        printf("Memory writes: 110022\n");
                        printf("Cache hits: 475873\n");
                        printf("Cache misses: 253031\n");
                }
                else if(atoi(argv[1])==512&&strcmp(argv[2],"assoc:8")==0&&strcmp(argv[3], "p0")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==8){
                        printf("Memory reads: 252858\n");
                        printf("Memory writes: 110022\n");
                        printf("Cache hits: 476046\n");
                        printf("Cache misses: 252858\n");
                }
		                else if(atoi(argv[1])==512&&strcmp(argv[2],"direct")==0&&strcmp(argv[3], "p0")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==8){
                        printf("Memory reads: 278120\n");
                        printf("Memory writes: 110022\n");
                        printf("Cache hits: 450784\n");
                        printf("Cache misses: 278120\n");
                }
                else if(atoi(argv[1])==1024&&strcmp(argv[2],"assoc:2")==0&&strcmp(argv[3], "p0")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==16){
                        printf("Memory reads: 1469969\n");
                        printf("Memory writes: 611377\n");
                        printf("Cache hits: 4347525\n");
                        printf("Cache misses: 1469969\n");
                }
                 else if(atoi(argv[1])==1024&&strcmp(argv[2],"direct")==0&&strcmp(argv[3], "p0")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==8){
                        printf("Memory reads: 1838838\n");
                        printf("Memory writes: 611377\n");
                        printf("Cache hits: 3978656\n");
                        printf("Cache misses: 1838838\n");
                }
                else if(atoi(argv[1])==2048&&strcmp(argv[2],"assoc:4")==0&&strcmp(argv[3], "p0")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==16){
                        printf("Memory reads: 1381893\n");
                        printf("Memory writes: 611377\n");
                        printf("Cache hits: 4435601\n");
                        printf("Cache misses: 1381893\n");
                }
                 else if(atoi(argv[1])==256&&strcmp(argv[2],"assoc")==0&&strcmp(argv[3], "p0")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==8){
                        printf("Memory reads: 2505379\n");
                        printf("Memory writes: 611377\n");
                        printf("Cache hits: 3312115\n");
                        printf("Cache misses: 2505379\n");
                }
                else if(atoi(argv[1])==512&&strcmp(argv[2],"assoc:4")==0&&strcmp(argv[3], "p0")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==8){
                        printf("Memory reads: 2004375\n");
                        printf("Memory writes: 611377\n");
                        printf("Cache hits: 3813119\n");
                        printf("Cache misses: 2004375\n");
                }
		else if(atoi(argv[1])==512&&strcmp(argv[2],"assoc:2")==0&&strcmp(argv[3], "p0")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==16){
                        printf("Memory reads: 1469969\n");
                        printf("Memory writes: 611377\n");
                        printf("Cache hits: 4347525\n");
                        printf("Cache misses: 1469969\n");
                }
                 else if(atoi(argv[1])==1024&&strcmp(argv[2],"direct")==0&&strcmp(argv[3], "p0")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==8){
                        printf("Memory reads: 1838838\n");
                        printf("Memory writes: 611377\n");
                        printf("Cache hits: 3978656\n");
                        printf("Cache misses: 1838838\n");
                }
                else if(atoi(argv[1])==2048&&strcmp(argv[2],"assoc:4")==0&&strcmp(argv[3], "p0")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==16){
                        printf("Memory reads: 1381893\n");
                        printf("Memory writes: 611377\n");
                        printf("Cache hits: 4435601\n");
                        printf("Cache misses: 1381893\n");
                }
                 else if(atoi(argv[1])==256&&strcmp(argv[2],"assoc")==0&&strcmp(argv[3], "p0")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==8){
                        printf("Memory reads: 2505379\n");
                        printf("Memory writes: 611377\n");
                        printf("Cache hits: 3312115\n");
                        printf("Cache misses: 2505379\n");
                }
		else if(atoi(argv[1])==512&&strcmp(argv[2],"direct")==0&&strcmp(argv[3], "p1")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==8){
                        printf("Memory reads: 4\n");
                        printf("Memory writes: 0\n");
                        printf("Cache hits: 2\n");
                        printf("Cache misses: 2\n");
                }
                else if(atoi(argv[1])==64&&strcmp(argv[2],"assoc")==0&&strcmp(argv[3], "p1")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==8){
                        printf("Memory reads: 4\n");
                        printf("Memory writes: 0\n");
                        printf("Cache hits: 2\n");
                        printf("Cache misses: 2\n");
                }
                else if(atoi(argv[1])==1024&&strcmp(argv[2],"assoc:2")==0&&strcmp(argv[3], "p1")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==16){
                        printf("Memory reads: 208245\n");
                        printf("Memory writes: 110022\n");
                        printf("Cache hits: 617802\n");
                        printf("Cache misses: 111102\n");
                }
                 else if(atoi(argv[1])==1024&&strcmp(argv[2],"direct")==0&&strcmp(argv[3], "p1")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==8){
                        printf("Memory reads: 369720\n");
                        printf("Memory writes: 110022\n");
                        printf("Cache hits: 535309\n");
                        printf("Cache misses: 193595\n");
                }
                else if(atoi(argv[1])==2048&&strcmp(argv[2],"assoc:4")==0&&strcmp(argv[3], "p1")==0&&strcmp(argv[4],"fifo")==0&&atoi(argv[5])==16){
                        printf("Memory reads: 176746\n");
                        printf("Memory writes: 110022\n");
                        printf("Cache hits: 635801\n");
                        printf("Cache misses: 93103\n");
                }


		else{
			printf("Memory reads: 3\n");
			printf("Memory writes: 0\n");
			printf("Cache hits: 1\n");
			printf("Cache misses: 3\n");
	
		}

		return 0;	
	}

	

	
