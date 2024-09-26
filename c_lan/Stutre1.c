#include<stdio.h>
int main(){
	struct Books{
	int price;
	int issued;
	int pages;
	float pageHeight;
	char name[20];
	};
	struct Books item;
		item.price = 200;
		item.issued = 1990;
	    item.pages = 80;
		item.pageHeight = 17.6;
		item.name[20] = "hauword";	
	
	printf("price is = %d\n",item.price);
	printf("issued date = %d\n",item.issued);
	printf("pages = %d\n",item.pages);
	printf("page height =%f\n\n",item.pageHeight);
	
	struct Books item2;
		item2.price = 400;
		item2.issued = 1290;
	    item2.pages = 70;
		item2.pageHeight = 15.6;
		item2.name[20] = 'hauword';	
	
	printf("price is = %d\n",item2.price);
	printf("issued date = %d\n",item2.issued);
	printf("pages = %d\n",item2.pages);
	printf("name = %s\n",item2.name);
	printf("page height =%f\n\n",item2.pageHeight);
        
        
        struct Books item3={
        	100,1867,100,19.7    	
		};
	printf("price is = %d\n",item3.price);
	printf("issued date = %d\n",item3.issued);
	printf("pages = %d\n",item3.pages);
	printf("page height =%f\n",item3.pageHeight);
        
//	printf("%s\n",item.name);
}
