#include<stdio.h>
int main(){
	char kt;
FILE *fptr=fopen("bt01.txt","r");
if(fptr==NULL){
	printf("Cannot open file!\n");
	return 1;
}
kt=fgetc(fptr);
	if(kt!=EOF){
		printf("ki tu dau tien la: %c\n",kt);
	}
fclose(fptr);
return 0;
}

