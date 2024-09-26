#include<stdio.h>
int first(int);
                     
int first(int a){
	int i,j,count=0;
	int arr[] = {1,2,1,2,3,3,6,6};
	int len = sizeof(arr)/sizeof(int);

   for(i=0; i<len; i++){
   	   for(j=i+1; j<len; j++){
   	   	   if(arr[i]==arr[j])
   	   	   	{
   	   	   		 count = count + 1;
   	   	   		 break;
			}
   	   	 	 
			while(arr[i]==arr[i+1]){
				i++;
			}	   
		  }    	 
   }
   		printf("%d ",count);  	 
}

int main(void){
	int a;
	first(a);
}
