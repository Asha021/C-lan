#include<stdio.h>
int add(int);
int checkprime(int);
void pod(int);

int add(int num){
	int sod = 0;
	while(num != 0){
		sod = sod + num%10;
		num = num/10;
	}
	return sod;
}

int checkprime(int num){
	 int i = 2;
	 for(; i<=num/2; i++){
	 	if(num%i == 0){
	 		return 0;
		 }
	 }
	 	return 1;
}

void pod(int num){
	int pdt = 1;
	while(num != 0){
		pdt = pdt*num%10;
		num = num/10;
	}
	printf("%d MAIN OUTPUT",pdt);
}


int main(){
  int num = 0;
  printf("Enter a no : ");
  scanf("%d",&num);
  fflush(stdin);
  int sum = add(num);
//  printf("%d",sum);
  if(checkprime (sum)== 0){
  	pod(sum);
  }else{
  	printf("%d It is prime No ",sum);
  }
	
}
