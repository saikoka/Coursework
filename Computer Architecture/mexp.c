#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	FILE *filePointer;
	filePointer = fopen(argv[1],"r");
	int size;
	fscanf(filePointer,"%d", &size);
	int arr[size][size];
	int i;
	int z;
	int a;
	int b;
	int exponent;
	for(z=0;z<size;z++){
		for(i=0;i<size;i++){
			
			fscanf(filePointer,"%d", &arr[z][i]);
			
		}
	}
	fscanf(filePointer,"%d",&exponent);
	fclose(filePointer);
	int copy[size][size];
        int q;
        int w;
        for(q=0;q<size;q++){
 	       for(w=0;w<size;w++){
   	            copy[q][w]=0;
               }
        }

	if(exponent==0){
		for(z=0;z<size;z++){
			for(i=0;i<size;i++){
				if(z==i){
					arr[z][i]=1;
				}
				else{
					arr[z][i]=0;
				}
			}
		}
		 for(a=0;a<size;a++){
                        for(b=0; b<size;b++){
                                printf("%d",arr[a][b]);
				if((b+1)<size){
					printf(" ");
				}
                        }
                        printf("\n");
                }
	}
				
	else if(exponent==1){
		for(a=0;a<size;a++){
			for(b=0; b<size;b++){
				printf("%d ",arr[a][b]);
			}
			printf("\n");
		}
	}
	else if(exponent>=2){
	
		if(exponent==2){
			int e;
			int f;
			int g;
			for(e = 0; e<size;e++){
				for(f=0;f<size;f++){
					for(g=0;g<size;g++){
						copy[e][f]+=arr[e][g]*arr[g][f];
					}
				}
			}
		 for(a=0;a<size;a++){
                       	 for(b=0; b<size;b++){
                              	printf("%d ",copy[a][b]);
                       	 }
                       	 printf("\n");
              	 }

		}
		else if(exponent>=3){
			int e;
	         	int f;
                        int g;
			int extra[size][size];
			memcpy(extra,copy,sizeof(copy));
                        for(e = 0; e<size;e++){
                                for(f=0;f<size;f++){
                                        for(g=0;g<size;g++){
                                                copy[e][f]+=arr[e][g]*arr[g][f];
                                        }
                                }
                        }
			exponent=exponent-2;
			while(exponent>0){
				for(e=0;e<size;e++){
					for(f=0;f<size;f++){
						for(g=0;g<size;g++){
							extra[e][f]+=copy[e][g]*arr[g][f];
						}
					}
				}
				memcpy(copy,extra,sizeof(extra));
				for(e=0;e<size;e++){
					for(f=0;f<size;f++){
						extra[e][f]=0;
					}
				}
				exponent--;
			}
			 for(a=0;a<size;a++){
                 		for(b=0; b<size;b++){
                 			printf("%d",copy[a][b]);
					if((b+1)<size){
						printf(" ");
					}
                 		}
                 		printf("\n");
                 	}



		}

	
	}
	return 0;	
}
/*void printArray(int arr[size][size]){
        int a;
        int b;
        for(a=0;a<M;a++){
                for(b=0;b<M;b++){
                        printf("%d ",arr[a][b]);
                }
                printf("\n");
        }
}*/



