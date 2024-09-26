#include<stdio.h>
int main(){
	char arr[2][10]={"asha","asjj"};
	int arr1[50];
	int i=0,j=0,s=0,nm="asha";
	for(i=0; arr[i]!=0; i++){
			arr1[(int)arr[i]]++;
	}
	for(i=0; i<50; i++){
		if(arr1[i]>1){
			printf("%s",arr[i]);
		}
	}
   
   return 0;
}


