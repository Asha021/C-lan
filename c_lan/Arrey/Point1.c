#include<stdio.h>
//int main(){
//	int arr[] = {2,3,4,5,6};
//	
//	int len = sizeof(arr)/sizeof(int);
//	int i=0,plus=0;
//	for(i=0; i<len; i++){	
//	    int *point = &arr[i];
//		plus = *point + plus;	
//	
//	}
//	printf("%d",plus);
//	return 0;
//}


int first(int,int);
int first(int add1, int add2){
	 printf("%d",add1+add2);
}
int main(void){
	int add1 = 0;
	int add2 = 0;
	scanf("%d %d",&add1,&add2);
	int *p1=&add1;
	int *p2=&add2;
	first(*p1,*p2);
}

