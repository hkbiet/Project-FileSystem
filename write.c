#include<stdio.h>

int main(){

	FILE* filepointer;

	char data[50] = "THIS IS SAMPLE DATA YOU KNOW !";

	filepointer = fopen("test.txt","a+");

	if(filepointer == NULL){
	
		printf("\nFILE COULD NOT BE OPENED ! fopen returned a NULL Pointer\n");
	
	
	}else{
	
	
		fputs(data, filepointer);
		fclose(filepointer);
	
	
	
	}








}
