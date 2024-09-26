 #include<stdio.h>
 #include<stdarg.h>
 int add(int, ...);
 int add(int count, ...){
 	va_list sums;
 	va_start(sums,count);
 	int  i=0;
 	for(; i<count; i++){
 		int a = va_arg(sums, int);
 		printf("%d\n",a);
	 }
	 va_end(sums);
	 return 0;
 }
 int main(void){
 	add(3,'s',56,7);
 }
