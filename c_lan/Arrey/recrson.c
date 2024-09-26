#include<stdio.h>
int first(int);
int first(int num){
	int i=1;
	if(num<=1)
	return 0;
	else if(num==2)
	return 1;
	else{
		return first(num-1)+first(num-2);
	}
}
int main(void){
	int i=1,num;
	scanf("%d",&num);
	 for(i=1; i<=num; i++){
	 	printf("%d",first(i));
	 }
}

