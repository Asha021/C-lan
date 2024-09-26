#include<stdio.h>
int first(int);

int first(int n){
     if(n<=1){
     	return 0;
	 }else if(n==2){
	 	return 1;
	 }else{
	  return (first(n-1)+first(n-2));
	 }

  }
int main(void){
    int i,num;
    scanf("%d",&num);
    for(i=1; i<num; i++){
  	printf("%d\n",first(i));
    }
//    first(1);
}

