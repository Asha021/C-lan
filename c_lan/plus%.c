#include<stdio.h>
int main(){

int a,sum;
printf("Enter a no");
scanf("%d",&a);
for(; a != 0; a = a/10){
  int last = a%10;
  sum = sum + last;	
}
printf("sum1 is =  %d",sum);
  return 0;
}


