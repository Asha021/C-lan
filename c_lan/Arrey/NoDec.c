#include<stdio.h>
int main(){
	int arr[]={2,3,5,4,8,1};
	int len = sizeof(arr)/sizeof(int);
	int i=0,j=0,temp=0;
	
	for(i=0; i<len; i++){
		for(j=1; j<len; j++){  
			if(arr[i]>=arr[j]){		    
			printf("%d\n",arr[i]);
			break;
			}else{
			printf("\n%d\n",arr[j]);
			break;
			}
		}
	}

  
} 
