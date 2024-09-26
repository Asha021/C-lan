#include<stdio.h>
int ft(int*,int*);
int ft(int *a1,int *b1){

	  int temp=0;n 
      temp = *a1;
	 *a1 = *b1;
	 *b1 = temp;

    printf("%d %d",*a1,*b1);
}
int main(void){
	    int a = 12,b=22;
//	    int *a1=&a;
//    	int *b1=&b;
	    ft(&a,&b);
}
