#include<stdio.h>
int* m1(int*);
int* m1(int *num){
	if(*num>1582){
	if((*num % 4 ==0 && *num % 100 != 0)||(*num % 400 == 0)){
         return 1;
	}else{
		 return 0;
    }
}else{
    	printf("it is greater than 1582");
	}
}
int main(void){
	int a=0;
	int *res;
	scanf("%d",&a);
	res=m1(&a);
	if(res==1){
		printf("it is leap year");
	}else if(res==0){
		printf("it is not a leap year");
	}else{
		return;
	}
}
