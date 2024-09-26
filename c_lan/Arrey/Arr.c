#include<stdio.h>
int main(){
	int i;
	int a[]={5,5,5};
	int len = sizeof(a)/sizeof(int);
	int sum = 0;
	for(i=0; i<len; i++){
		   
//			printf("%d\n",a[i]);
			sum = sum + a[i];	
			printf("%d\n",sum); 
	}	
    return 0;
}
