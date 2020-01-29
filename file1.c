#include<stdio.h>
#include<stdlib.h>


struct person{

	int Id;
	char name[10];
	char college[10];

};

int main(){

	FILE* handler;
	handler = fopen("test_file.dat", "w");

	struct person person1 = {100, "HEMANT", "IIITA"};

	// Writing to the file 

	int result = fwrite(&person1, sizeof(struct person), 1, handler);

	if(result != 0){
	
		printf("\nSUCCESS ! %d bytes were written to the file !\n", result);
	
	}else {
	
		printf("\n FAILURE !\n");
	}


	fclose(handler);

	// Reading from the file 
	
	struct onemore{
	
		int Id;
		char name[10];
		char college[10];
	
	} variable;

	handler = fopen("test_file.dat","r");

	while(fread(&variable, sizeof(struct onemore), 1, handler)){
	
		printf("\n ID = %d\n NAME = %s\n COLLEGE = %s\n\n",variable.Id, variable.name, variable.college);
	
	
	}

	fclose(handler);


	



return 0;
}
