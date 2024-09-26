#include<stdio.h>

//pow(2, 5) -->32
int main(){

	int n,r,t,s=0;
	printf("Enter a value");
	scanf("%d",&n);
	t=n;
	while(n>0){
		r = n%10;
		s=s+(r*r*r);
		n=n/10;
	}
	if(t == s){
	 	printf("it is a armstrong no\n");
	 }else{
	 	printf("it is not a armstrong no\n");
	 }
}
