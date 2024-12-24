#include<stdio.h>
int main(){
FILE *fptr =fopen("bt01.txt","w"); 
fputs("hello\nhelloworld",fptr);
close(fptr); 
return 0;
}

