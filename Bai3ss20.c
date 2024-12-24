#include<stdio.h>
int main(){
	char addfile[100];
FILE *fptr=fopen("bt01.txt","a");
if(fptr==NULL){
	printf("Cannot open file");
	return 1;
}
printf("Nhap vao chuoi muon them: ");
fgets(addfile,100,stdin);
fprintf(fptr,"%s",addfile);
fclose(fptr);
return 0;
}

