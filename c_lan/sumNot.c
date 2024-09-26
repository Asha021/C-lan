#include<stdio.h>
int first(int);
int sec(int);

 int first(int num){
 	 int fact=1;	
 	 for(; num!=0; num--){
 	 	 fact = fact*num;
	  }

 }
 
 int sec(int num){
 	//	int b = first(5);
 	int i,copy,sum=0;
 	 printf("Enter a no");
 	 scanf("%d",&num);
 	 for(i=1; i<=num; i++){
 	 	 copy = first(i)/num;
 	 	 sum = sum+copy;
 	 	 printf("%d!/%d+",i,i);
	  }
	  printf("= %d",sum);
 }
 
 int main(){
 	sec(1);
 }
