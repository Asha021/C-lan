#include<stdio.h>
#include<string.h>
union add{
	char name[2][30];
	int age;
	int Address[50];
};
int main(){
	union add ins;
//	ins.name[2][30]={{12,21},{2,3}}
	strcpy(ins.name[0],"Asha");
	strcpy(ins.name[1],"kumari");
	printf("%s %s",ins.name[0], ins.name[1]);
}
