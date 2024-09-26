#include<stdio.h>
int* first(int*,int*);

int* first(int* a1, int* b1){
	   if(*a1<*b1){
	   	return b1;
	   }else{
	   	return a1;
	   }	
}
int main(void){
	int a=0,b=0;
	int *result;
	scanf("%d %d",&a,&b);
	result=first(&a,&b);
   	printf("%d",*result);
}
