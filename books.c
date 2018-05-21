#include<stdio.h>
#include<string.h>

struct Books{
	int bookID;
	char subject[15], authorName[20];
	char bookTitle[50];
};

void printBook(struct Books *b){
	printf("\n\nBook ID: %d", b->bookID);
	printf("\nBook Title: %s", b->bookTitle);
	printf("\nBook Subject: %s", b->subject);
	printf("\nBook Author: %s", b->authorName);
}

void main(){
	struct Books book;				//use dot notations for normal structure var
	struct Books *ptr;				//use arrow notations for pointers
	
	ptr= &book;
	
	ptr->bookID = 1;
	strcpy(ptr->subject, "C Programming");
	strcpy(ptr->authorName, "Y Kanetkar");
	strcpy(ptr->bookTitle, "Let Us C");
	
	printBook(ptr);
}
