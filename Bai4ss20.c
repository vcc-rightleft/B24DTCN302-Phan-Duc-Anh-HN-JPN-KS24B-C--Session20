#include<stdio.h>
int main(){
	char dau[100];
FILE *fptr=fopen("bt01.txt","r");
if(fptr==NULL){
	printf("Cannot open file");
	return 1;
}

	if(fgets(dau,100,fptr)!=NULL){
		printf("dong dau la: %s",dau);
}
fclose(fptr);
return 0;
}

