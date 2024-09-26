#include<stdio.h>
int sec(int);
int num,rev=0;


int sec(int num){
      
     	if(num==0)
        return;  
		rev = rev*10+num%10;        
		sec(num/10); 
	         
}

int main(void){
	printf("Enter a no");
	scanf("%d",&num);
	sec(num);
	printf("%d\n",rev);
	
	sec(1);
}
