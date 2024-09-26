 #include<stdio.h>
 int main(){
 	FILE * file=fopen("ARM.c","r");
// 	if(file!=NULL){
// 		printf("PresenT file\n");
//	 }else{
//	 		printf("not PresenT\n");
//	 }
	 int av=0;
	 while((av=getc(file))!=EOF){
	 	printf("%c",av);
	 }
	 fclose(file);
	 return 0;
 }
