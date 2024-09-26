
#include <stdio.h>
int add(int);
int fact=1;

int add(int num){
    if(num==0){
    return;
}
    fact=fact*num;
    add(num-1);

}
int main(void){
	
  int num;
  printf("Enter a value");
  scanf("%d",&num);
  add(num);
  printf("%d",fact);

}



