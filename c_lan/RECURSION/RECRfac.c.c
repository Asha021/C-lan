#include<stdio.h>
int first(int);
int fact=1;
int first(int num){
 
    if(num==0){  
     return;
	}
	 fact=fact*num;
	 first(num-1);
}
int main(void){
	int num;
	scanf("%d",&num);
	first(num);
	printf("%d\n",fact); 
}
