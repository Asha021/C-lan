#include<stdio.h>
int first (int [],int,int);

int first(int arr1[],int l, int ui){
     int  arr2[l+1];
     int i = 0;
     for(i=0; i<l; i++){
     	 if(arr1[i]>ui){
     	 	arr2[i]=ui;
     	 	break;
		}else{
		  	arr2[i]=arr1[i];
		}
	
	 }
	 if(i==l){
	 	arr2[l]=ui;
	 }
	 
	 for(i=0; i<l; i++){
	 		printf("%d\n",arr2[i]);
	 }
	
}

int main(void){
	int arr[]={2,3,3,5};
	int len = sizeof(arr)/sizeof(int);
	int user=0;
	scanf("%d",&user);
	first(arr,len,user);
}

