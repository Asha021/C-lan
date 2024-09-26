
#include<stdio.h>
int first(int , int);
//int pow;
int first(int num,int pow){
//	int num;
    if(pow==0)
    return;
	return num*first(num,pow-1);
}

int main(void){
	int num=0,pow=0;
	scanf("%d%d",&num,&pow);
	int opt=first(num,pow);
	printf("%d",opt);	
	
//    first(1);
}



//#include<stdio.h>
//int main(){
//	int num,num2,sum=1;
//	printf("enter no");
//	scanf("%d%d",&num,&num2);
//			
//	while(num2!=0){
//		 sum = sum*num;
//		 num2--;
//	}
//		printf("%d\n",sum);
//	return 0;
//}
