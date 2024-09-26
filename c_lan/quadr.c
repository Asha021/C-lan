#include<stdio.h>
int main(){
	int a = 0, b = 0;
	printf("Enter a three digits with plus sub");
	scanf("%d %d", &a , &b);
	
	if(a>0){
        if(b>0){
        	printf("%d it is one quad",a,b);
		}else{
				printf("%d it is forth quad",a,b);
		}		
	}else{
		 if(b<0){
        	printf("%d it is third quad",a,b);
		}else{
				printf("%d it is two quad",a,b);
		}
	}
	return 0;
}
