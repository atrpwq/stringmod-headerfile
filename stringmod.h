#include<stdio.h>
#include<string.h>
int upper(char input[]){
	for(int i=0;i<strlen(input);i++){
		if(input[i] >= 'a' && input[i] <= 'z'){
			printf("%c",input[i]-32);
		}
		else{
			printf("%c",input[i]);
		}
	}
	printf("\n");
}
int lower(char input[]){
	for(int i=0;i<strlen(input);i++){
		if(input[i] >= 'A' && input[i] <= 'Z'){
			printf("%c",input[i]+32);
		}
		else{
			printf("%c",input[i]);
		}
	}
	printf("\n");
}
int zkript(char input[]){
	for(int i=0;i<strlen(input);i++){
		printf("%c",input[i]-13);
	}
	printf("\n");
}
