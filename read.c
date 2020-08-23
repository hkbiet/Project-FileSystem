#include<stdio.h>

int main(){

	FILE* filepointer;

	char data[100] ;

	filepointer = fopen("test.txt", "r");

	if(filepointer == NULL){
	
		printf("\nFAILED TO OPEN FILE ! fopen returned a NULL pointer\n");
	
	}else{
	
		fgets(data, 100, filepointer);
		printf("\n DATA >> %s \n", data);
		fclose(filepointer);
	
	
	}
	
	




}
