#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	double z;
	double sum;
	double sumEachSquared;
	int n=0;
	
	while(scanf("%lf",&z)==1){
	sum+=z;
	sumEachSquared+=z*z;
	n++;	
	}
	if(n==0){
		printf("no data\n");
		return 0;
	}
	double mean=sum/n;
	double stddev=sqrt((sumEachSquared-(sum*sum)/n)/n);
	printf("mean: %.0f\n",mean);
	printf("stddev: %.0f\n",stddev);	

	return 0;
}

