#include<stdio.h>

struct record{


	int a,b;


};


int main(){

	FILE *fpw, *fpr;

	
	fpw = fopen("file.data", "wb");

	struct record MyRecord;

	MyRecord.a = 1;
	MyRecord.b = 2;

	fwrite(&MyRecord, sizeof(struct record), 1, fpw);

	fclose(fpw);
	

	fpr = fopen("file.data", "rb");

	fread(&MyRecord, sizeof(struct record), 1, fpr);

	printf("%d", MyRecord.b);

	fclose(fpr);



}
