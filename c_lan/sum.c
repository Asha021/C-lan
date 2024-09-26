#include<stdio.h>
int main(){
		int a,b,c;
       	printf("physics  ");
    	scanf("%d",&a);
    	printf("chemestry  ");
    	scanf("%d",&b);
    	printf("math  ");
    	scanf("%d",&c);
    	
    	int sum = a+b+c;
    	int sum2 = a+b;
    	if(a >= 65 &&  b >= 55 && c >= 50){
    	if(sum >= 190 || sum2 >= 140){
    		if(sum >= 140 && sum <= 190){
    				printf("Total marks of physics & chemestry %d it is qualified",sum2);
			}else{
					printf("Total marks %d it is qualified",sum);
			}
				}
    	
		}else{
			printf("Total marks %d it is not qualified",sum);
		}

    return 0;
}
