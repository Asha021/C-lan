#include<stdio.h>
#include<math.h>
int check(int);
void first(int);
int sec(int);
int third(int);
int facto(int);
int four(int);



void first(int num){
	int number;
   	int a=0,b=1,sum=0,i;
    printf("enter start and end digit: ");
    scanf("%d%d",&num,&number);

	for(i=num; i<number; i++){
       sum = a + b;
         if(sum<=number && sum>=num){
	  	  printf("%d\n",sum);
	  }
       a = b;
       b = sum;
	  }	
}


int sec(int number){
	 int arm = 0,count = 0,num=0;
	 printf("Enter your no");
	 scanf("%d",&num);
	 int copy = num;
	 
	 while(num != 0){
	 	num = num/10;
	 	count++;
	 }
	 printf("Count of Digit: %d\n",count);
	 num = copy;
	 
	 for(; num!=0;){
	 	int last = num%10;
	 	num=num/10;
	 	arm = arm + pow(last,count);
	 }
	 printf("%d\n",arm);
	 if(arm == copy){
	 	printf("it is a armstrong no\n");
	 }else{
	 	printf("it is not a armstrong no\n");
	 }
}

 int third(int num){
 	int a=0,b=0,c=0;
 	printf("Enter three digits\n");
 	scanf("%d%d%d",&a,&b,&c);
 	if(a<b&&c<b){
 		printf("largest no %d\n",b);
	 }else if(b<c&&a<c){
	 	printf("largest no %d\n",c);
	 }else{
	 	printf("largest no %d\n",a);
	 }
 }

int check(int num){
	int fact = 1;
	for(; num!=0; num--){
	fact = fact*num;
	}
	return fact;
}

  int four(int num){
  	printf("enter a no");
    scanf("%d",&num);
  	int sum=0;
  	int copy = num; 
  
  	while(num!=0){
  	int i = num%10;
	sum = sum + check(i); 
	num = num/10;	
 }
    if(sum == copy){
 	printf("strong\n");
 }  else{
 	printf("not strong\n");
 }
	  
 }

int main(){
	int number = 0,start=0,end=0;
	int i = 0;	
	for( i=1; i<=5; i++){
	printf("press 1 for Find fibbonecci Series\n");
	printf("press 2 for whether no or armstrong no not\n");
	printf("press 3 for find largest among three\n");
	printf("press 4 for whether no or strong no or not\n");
	printf("press 5 to exit\n");
	
	int num=0;
	scanf("%d",&num);
	switch(num){
	case 1:{	 
	   
		first(num);
		break;
	}
	case 2:{
		sec(1);
	    break;
	}	case 3:{
		third(1);
	    break;
	}
		case 4:{
		   four(1);
	    break;
	}
		case 5:{
		    return;
	    break;
	} 
	default :{
		 printf("enter valid no\n");
		break;
	}
}}}



