#include<stdio.h>
int main(){
	int a;
	printf("enter a no");
	scanf("%d", &a);
		
	if(a>1582){
      if((a % 4 == 0  && a % 100 != 0)  || (a % 400 == 0)){
  	  printf("%d it is leap year",a);
  }else{
  	   printf("%d it is not a leap year",a);
  }	
}
	else{
		 printf(" %d it is greater than 1582",a);
	}
	return 0;
}
