#include<stdio.h>
int main(){
    int no;
	printf("ENTER 1 FOR  SWIFT VALUE \nENTER 2 FOR  ASCII value \nENTER 3 FOR  odd-even VALUE \nENTER 4 FOR  Shift VALUE \nENTER 5 FOR  deg cel to F VALUE \n");
	scanf("%d",&no);
	
	switch(no){	
	case 1 :{
	
	int a=0,b=0;
	printf("ENTER TWO DIGITS\t");
	scanf("%d",&a);
	scanf("%d",&b);
	b = a + b;
	a = b - a;
	b = b - a;
			printf("%d %d",a,b);
			break;
		}
	case 2 :{
		int a;
		printf("ENTER YOUR NO\t");
		scanf("%d",&a);
		printf("Ascii value is %c",a);
		break;
	}
	case 3 :{
		int a;
		printf("ENTER YOUR NO\t");
		scanf("%d",&a);
		if(a % 2 == 0){
printf("it is enen no %d",a);	
		}else{
			printf("it is odd no",a);
		}
		break;
	}
	case 4 :{
		int a=0;
		char ch;
		printf("Enter a no ");
		scanf("%d",&a);
		printf("Enter R for Right  &  Enter a L for Left ");	
		fflush(stdin);	
		scanf("%c",&ch);
		
		if(ch == 'R'){			
			printf("RIGHT SHIFT FOR R  %d",a>>2);
		}else if(ch == 'L'){
			printf("LEFT SHIFT FOR L  %d",a<<2);
		}else{
			printf("ENTER VALID OPTION");
		}
		
		break;
	}
case 5:{
		int a;
		int b = a*(9/5)+32;
		
		printf("enter your Deg\t");
		scanf("%d",&a);
		printf("%d F",b);
		break;
	}
	    default: 	printf("error");
}


}
