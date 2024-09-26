#include<stdio.h>
#include<stdlib.h>
//int main(){
//	int mem;
//	printf("Write a memory size you want it..");
//	scanf("%d",&mem);
//
//	int*ptr=(int*)malloc(mem);
//	printf("Enter  %d element ",mem/4);
//	int i=0;
//	for(; i<mem; i++){
//		int temp;
//		scanf("%d",&temp);
//		ptr[i]=temp;
//		printf("%d\n",ptr[i]);		
//	}
//	free(ptr);
//	return 0;
//}

int main(){
	
	int*ptr=(int*)calloc(5,4);

	int i=0,j=1;

for(i=0; i<5; i++)
{
	scanf("%d", ptr+i);
	
}
	
	int max = ptr[0];
	
	for(i=0; i<5; i++)
	{
		if(max < ptr[i])
		{
			max = ptr[i];
		}
	}
	printf("%d", max);
	free(ptr);
	return 0;
}
