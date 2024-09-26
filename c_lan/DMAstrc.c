#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
	struct data{
			char name[20];
			int age;
			float height;
			float weight 
	};

int main(){
	    struct data *ptr=(struct data *)calloc(5,sizeof(struct data));
	    int i;
		
		struct data ptr1={
			"AJAY",25,5.5,45
		};
	
			struct data ptr2={
			"KANAK",15,4.6,33
		};

			struct data ptr3={
			"VIJAY",20,6.3,48
		};
	
			struct data ptr4={
			"RAMESH",25,5.9,40
		};

			struct data ptr5={
			"NISHA",21,5.1,33
		};

        
        ptr[0]=ptr1;
        ptr[1]=ptr2;
        ptr[2]=ptr3;
        ptr[3]=ptr4;
        ptr[4]=ptr5;
        for(; i<5; i++){
        	printf("NAME:- %s\nAGE:- %d\nHEIGHT:- %f\nWEIGHT:- %f\n\n",
			ptr[i].name,ptr[i].age,ptr[i].height,ptr[i].weight);
		}
		free(ptr);
}
