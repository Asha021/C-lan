#include<stdio.h>
int first(int [],int);

int first(int arr[],int len){
	int i=0,j=0;
//	int arr[] = {2,7,8,45,86,23,45,7,4,76,56};
//	int len = sizeof(arr)/sizeof(int);
	for(i=0; i<len; i++){
	  for(j=i+1; j<len; j++){
	  	 if(arr[j]<arr[i]){
	  	 	int temp = arr[i];
	  	 	arr[i] = arr[j];
	  	 	arr[j] = temp;
		   }
	  }
	  	printf("%d\n",arr[i]);
	}
}
int main(void){
	int a;
	int arr[] = {2,7,8,45,86,23,45,7,4,76,56};
	int len = sizeof(arr)/sizeof(int);
	first(arr,len);
}
