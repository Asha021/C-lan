#include<stdio.h>
int first(int);

int first(int a){
	int arr1[]={22,35,12,32,13};
	int arr2[]={22,35,12,32,3};	
	int len = sizeof(arr1)/sizeof(int);
	int i=0;
	int flag=0;
	for(i=0; i<len; i++){
	    	if(arr1[i]!=arr2[i])
        	printf("0");
	        else
	    	printf("1");	
//	    	printf("%d %d\n",arr1[i],arr2[i]);	
	}
  
}
int main(void){
	int a;
	first(a);
}
