#include<stdio.h>
int first(int);
int a=0,b=1,sum=0,num=1,number,i;

int first(int num){
  	
    if(number==0)
    return;
    if(num<number){
    	return 1;
	}else{
		return 0;
	}
    	
	
     first(num++);
    if(sum<=number){
    	 sum = a + b;
    	
	  	  printf("%d\n",sum);
       a = b;
       b = sum;	  
    }

  }
int main(void){
	printf("Enter a No");
	scanf("%d",&number);
	first(num);   
}
