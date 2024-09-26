#include<stdio.h>
int main(){
	int arr[] = {2,7,34,67};
	int len = sizeof(arr)/sizeof(int);
	int *point=arr;
	int i=0;
	for(i=0; i<len; i++){
		printf("%d\n",*(point+i));
	}
}
