#include<stdio.h>
int main(){
	int i=0,del=0;
	int arr1[]={2,4,5,8,9};
	int len = sizeof(arr1)/sizeof(int);

	for(i=0; i<len; i++){
		printf("%d ",arr1[i]);
	}
		scanf("%d",&del);
	for(i=0; i<len; i++){		
		if(del==arr1[i]){
			
		arr1[i] = 0;
        printf("%d ",arr1[i]);
		}else{
			printf("%d ",arr1[i]);
		}
		
	}

   return 0;
}
