#include<stdio.h>
int check(int);
int check(int jay){
	int i=0;
    for(i=2; i<=jay/2; i++){
    	if(jay % i == 0)
    	return 0;
	}
	return jay;
    
}
int main(){
	int arr1[3][3] = {{3,1,4},{2,3,4},{3,3,4}};
	int arr2[3][3] = {{2,2,4},{2,3,4},{9,8,8}};	
	int len1 = sizeof(arr1)/sizeof(arr1[0]);
    int len2 = sizeof(arr2)/sizeof(arr2[0]);	
	int i=0,j=0,a=0,k=0,as,count=0,jay, is=0;
	
    
	for(i=0; i<len1; i++)
	{
		for(j=0; j<len1; j++)
		{
			int jay=arr1[i][j] + arr2[i][j];
			if((check(jay))!=0){
				 printf("%d ",jay);	 	
			}
			 		
		}
	}

	return 0;
}
