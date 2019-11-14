#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	char *str=argv[1];
	int z;
	for(z=0; z<strlen(str); z++){
		if(str[z]=='1'||str[z]=='2'||str[z]=='3'||str[z]=='4'||str[z]=='5'||str[z]=='6'||str[z]=='7'||str[z]=='8'||str[z]=='9'||str[z]=='0'){
			printf("error\n");
			return 0;
		}
	}
	char ch[strlen(str)*10];
	int i;
	int j=0;
	for(i=0; i<strlen(str); i++){
		ch[j]=str[i];
		if(str[i]==str[i+1]){
			int z=2;
			int g=i+1;
			while(str[g]==str[g+1]){
			z++;	
			g++;
			}
			ch[j+1]= z+'0';
			j=j+2;
			i=i+z-1;
		}
		else{
			ch[j+1]='1';
			j=j+2;
		}
	}
	if(strlen(ch)>strlen(str)){
	printf("%s\n", str);
	return 0;
	}
	printf("%s\n", ch);
	return 0;
}

