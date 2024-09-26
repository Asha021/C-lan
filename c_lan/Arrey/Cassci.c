#include<stdio.h>
int main(){
	char arr[100];
	int i=0;

    scanf("%s",arr);
    int l = sizeof(arr);
//    for(i=0; arr[i]!=0; i++){
//     printf("ASCII IS %d \n",arr[i]);
//	}
    for(i=0; arr[i]!=0; i++){
    	if(arr[i]>=97 && arr[i]<=122)
    	printf("ASCII VALUE %c \n",arr[i]-32);
    	else
    	printf("ASCII VALUE %c \n",arr[i]+32);
	}

	return 0;
}
