#include<stdio.h>
int first(int);
int num2;
int first(int num){
	
	 if(num2==0)
	 return;
	 if(num2=1 && num2<=9){
	 	num=num2*num2;
	 }
	 printf("%d",num);
	 first(num);
	
}

int main(void){
	int num=0,num2=0;
	scanf("%d%d",&num,&num2);
	first(num);
}
