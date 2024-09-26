#include<stdio.h>
#include<string.h>	
int avl=0;	
struct book{
    	char BookName[12];
		int BookId;
    	char BookAuthorName[20];
		int BookPrice;
	    struct date{
	    	int day;
	    	int mon;
	    	int year;
		}BookIssued,ReturnDate;
		struct std{
			char stdName[20];
			int stdId;
		}std;
			
};

void printBook(struct book);
int print2(struct book);
void find(struct book[], char[],int);
int find2(struct book[],char[],int);

void printBook(struct book lib){
    printf("Book-Details..\nBOOK-NAME :- %s\nBOOK-ID :- %d\nAUTHOR-NAME :- %s\nBOOK-PRICE :- %d\nBOOK-ISSUED-DATE :- %d-%d-%d\nBOOK-RETURN-DATE :- %d-%d-%d\n\nGiven To... \nStudent-Name :- %s\nStudent-Id :- %d",
    lib.BookName,lib.BookId,lib.BookAuthorName,lib.BookPrice,lib.BookIssued.day,lib.BookIssued.mon,
    lib.BookIssued.year,lib.ReturnDate.day,lib.ReturnDate.mon,
	lib.ReturnDate.year,lib.std.stdName,lib.std.stdId);
}

int print2(struct book lib){

	printf("BOOK PRICE :- %d\n",lib.BookPrice);
	printf("Enter a book price\n");
	int price,i;
	scanf("%d",&price);
	if(price==lib.BookPrice){
		printf("Thank you\n");
		avl=1;
	}else if(price>=lib.BookPrice){
		printf("Extra value :- %d \n",price-lib.BookPrice);
		avl=1;
	}else{
		printf("This value is less than a Book price\n");
		avl=0;
	}
	return 1;

//		if((avl==1))
//		{
//           printf("Available book1\n"); 	
//
//		}else if(avl!=0){
//			 printf("NOT1\n");
//		}

}

int find2(struct book store[] , char input[], int len){
    int i=0;
    int fd = 0;
//     struct book  print2()=a; 
    for(i=0; i<=len; i++){
    	if((avl==1))
		{
           printf("Available bookm\n"); 	
    		fd=1;
    		break;
		}else if(avl!=0){
			 printf("NOT\n");
			 	break; 
		}

	}
	if(fd==0){
		  printf("NOT Available book\n");  
	}
    
}




void find(struct book store[] , char input[], int len){
    int i=0;
    int fd = 0;
    for(i=0; i<=len; i++){
    	if(strcmp(input,store[i].BookName)== 0)
		{
           printf("Available book\n"); 	
//    		printBook(store[i]);
            print2(store[i]);
    		fd=1;
    		break;
		}

	}
	if(fd==0){
		  printf("NOT Available book\n");  
	}
    
}



int main(){
	    
   struct book lib ={
   "Accounts",
   203,
   "Thomas",
   400,
   {23, 4, 2024},
   {23, 5, 2024},
   "Asha",
    101
   };

   struct book lib1 ={
   "MATH",
   343,
   "J-K KALASH",
   450,
   {12, 4, 2024},
   {23, 5, 2024},
   "Jay",
    203
   };
   
   struct book lib2 ={
   "Graphics",
   102,
   "p.r-kamal",
   250,
   {6, 4, 2024},
   {7, 5, 2024},
   "bijay",
    702
   };
//   printf("\nBOOK-NAME :- %s\nBOOK-ID :- %d\nAUTHOR-NAME :- %s\nBOOK-PRICE :- %d\nBOOK-ISSUED-DATE :- %d-%d-%d\nBOOK-RETURN-DATE :- %d-%d-%d\n",
//   lib2.BookName,lib2.BookId,lib2.BookAuthorName,lib2.BookPrice,lib2.BookIssued.day,lib2.BookIssued.mon,
//   lib2.BookIssued.year,lib2.ReturnDate.day,lib2.ReturnDate.mon,lib2.ReturnDate.year);

   
   struct book lib3 ={
   "English",
   404,
   "A.R-Prem",
   400,
   {1, 6, 2024},
   {15, 7, 2024},
   "kanak",
    271
   };
//    printf("\nBOOK-NAME :- %s\nBOOK-ID :- %d\nAUTHOR-NAME :- %s\nBOOK-PRICE :- %d\nBOOK-ISSUED-DATE :- %d-%d-%d\nBOOK-RETURN-DATE :- %d-%d-%d\n",
//   lib3.BookName,lib3.BookId,lib3.BookAuthorName,lib3.BookPrice,lib3.BookIssued.day,lib3.BookIssued.mon,
//   lib3.BookIssued.year,lib3.ReturnDate.day,lib3.ReturnDate.mon,lib3.ReturnDate.year);
 
   struct book lib4 ={
   "Web",
   805,
   "kishan",
   300,
   {23, 6, 2024},
   {21, 7, 2024},
   "kelash",
    602
   };
//   printf("\nBOOK-NAME :- %s\nBOOK-ID :- %d\nAUTHOR-NAME :- %s\nBOOK-PRICE :- %d\nBOOK-ISSUED-DATE :- %d-%d-%d\nBOOK-RETURN-DATE :- %d-%d-%d\n",
//   lib4.BookName,lib4.BookId,lib4.BookAuthorName,lib4.BookPrice,lib4.BookIssued.day,lib4.BookIssued.mon,
//   lib4.BookIssued.year,lib4.ReturnDate.day,lib4.ReturnDate.mon,lib4.ReturnDate.year);
    struct book lib5 ={
   "Business",
   140,
   "j.k-Raman",
   200,
   {1, 6, 2024},
   {20, 7, 2024},
   "sonam",
    864
   };
   
    struct book lib6 ={
   "Creativity",
   703,
   "jay-kishan",
   350,
   {4, 6, 2024},
   {10, 7, 2024},
   "Shree",
    934
   };
   
    struct book lib7 ={
   "Designing",
   503,
   "R.K-Puram",
   150,
   {23, 6, 2024},
   {21, 7, 2024},
   "kamal",
    201,
   };
   
    struct book lib8 ={
   "Development",
   702,
   "kishan",
   350,
   {5, 6, 2024},
   {21, 7, 2024},
   "sapna",
    765
   };
   
    struct book lib9 ={
   "Hindi",
   805,
   "kabir",
   250,
   {13, 6, 2024},
   {21, 7, 2024},
   "sonu",
    756
   };
   
    struct book lib10 ={
   "BhagvatGita",
   302,
   "Tulsidas",
   400,
   {23, 6, 2024},
   {21, 7, 2024},
   "Rishab",
    123
   };
    
    struct book bookstore[20];
    bookstore[0]=lib;
    bookstore[1]=lib1;
    bookstore[2]=lib2;
    bookstore[3]=lib3;
    bookstore[4]=lib4;
    bookstore[5]=lib5;
    bookstore[6]=lib6;
    bookstore[7]=lib7;
    bookstore[8]=lib8;
    bookstore[9]=lib9;
    bookstore[10]=lib10;
    int j=0;
    for(; j<2; j++){
   	printf("Enter a 1 for buy a book \nEnter a 2 for find a book\nEnter a 3 for Exit\n");
    int no;
    scanf("%d",&no);
    switch(no){	
case 1 :{
    printf("ENTER A BOOK NAME1 :-");
    char user[20];
    
     scanf("%s",user); 
	 find(bookstore,user,11);
	 break;
}case 2 :{
	  printf("ENTER A BOOK NAME2 :-");
	 char as[12];
     scanf("%s",as);
     find2(bookstore,as,11);
   break;
}case 3 :{
   return;
}  default:	printf("Enter a valid No \n");
}
}
//     printBook(lib2);
   
//     printf("YOU CAN BUY A BOOK :- ");
//     int price=0;
//    scanf("%d",&price);
//    price2(bookstore,price); 
//	find2(bookstore,price,11);
}

//   struct book std1 nst={"ASHA",232}; 
//   printf("%s ",st.name);
//   printf("%d \n",st.IdNo);
//	lib.name[]="ashhh"; not possible
//   dt date={23,6,2024};
//   dt*pnt=&date;
//	strcpy(lib.name,"assssss");  
//    printf("%d/",pnt->day);
//    printf("%d/",pnt->mon);
//    printf("%d",pnt->year);
