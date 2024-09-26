#include<stdio.h>
int first(int);

int first(int a){
	int i=0,j=0;
	int arr[] = {46,65,4,76,6,8,9,8,46,6,57};
	int len = sizeof(arr)/sizeof(int);
	for(i=0; i<len; i++){
		for(j=i+1; j<len; j++){
			if(arr[j]>arr[i]){
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
	first(a);
}
