#include<stdio.h>
int main(){
	int arr[] = {2,2,3,3,3,4,4,4,4,4};
	int len = sizeof(arr)/sizeof(int);
	int i = 0,j=0,c=0,count=0;
	for(i=0; i<len; i++){
		for(j=i+1; j<len; j++){
		
				if(arr[i]==arr[j]){
//				count = count+1;
				 printf("%d\n",arr[i]);
				break;
			    }
//		    	while(arr[j]%2==0){
//				printf("%d",count);
//				
//			}		   
			}          
		}
//		  printf("%d\n",count);
		
	
	} 


