#include<stdio.h>
int first(int);
int sec(int);
// 
//int first(int num){
//	int a=1;
//	int start =  num;
//	for(; num!=0; num--){
//		a = num*a;
////		printf("%d\n",a);
//	}
//    return a;
//}
//
//int sec(int num){
//	int i,copy,sum=0;
////	int b = first(5);
//	printf("Enter a no");
//	scanf("%d",&num);
//
//	for(i=1; i<=num; i++){
//		   copy = first(i)/num;
//		   sum = sum + copy;
//		 printf("%d!/%d + " ,i, i);
//		
//	}
//	printf(" = %d", sum);
//}
 
 int first(int num){
 	 int fact=1;
 	 printf("Enter a no");
 	 sacnf("%d",&num);
 	 int start = num;
 	 for(; num!=0; num--){
 	 	 fact = fact*num;
 	 	 printf("%d",fact);
	  }
 }
int main(){
//	sec(1);
	first(1);
}
