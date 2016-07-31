//Name:Ujjwol Shrestha
//Roll number: 0543
//C program to implement linked list

#include<stdio.h>
#include<stdlib.h>
 struct node{
  	int info;
  	struct node *next;
 };
 
 typedef struct node *nodeptr;
 
 nodeptr getnode();
 void insertfirst(nodeptr *, int);
 int deletefirst(nodeptr *);
 void displaylist(nodeptr);
 int check_underflow(nodeptr *);
 int main()
 {
 	nodeptr list;
 	list=NULL;
 	printf("The given list is :\n");
 	insertfirst(&list,10);
 	insertfirst(&list,20);
 	insertfirst(&list,30);
 	insertfirst(&list,40);
 	insertfirst(&list,50);
 	displaylist(list);
 	printf("\t");
 	printf("\nList after deletion\n");
 deletefirst(&list);	
 	deletefirst(&list);
 	deletefirst(&list);
 	deletefirst(&list);
 
 	displaylist(list);
 }
 nodeptr getnode(){
 	return (nodeptr)malloc(sizeof(struct node));
 }
 
 void freenode(nodeptr p){
 	free(p);
 }
 void insertfirst(nodeptr *p, int x){
nodeptr q;
 	q=getnode();
 	q->info=x;
 	q->next=*p;
 	*p=q;
 }
 
 void displaylist(nodeptr p){
 	nodeptr ptr=p;
 	while(ptr!=NULL){
 		printf("%d",ptr->info);
 		ptr=ptr->next;
 	}
 }
 
 
 int deletefirst (nodeptr *p) {
 	if (check_underflow(p)) {
 		printf ("\n Linked List Underflow \n");
 		exit(1);
 	} else {
 		int x;
 		nodeptr q;
 		q = *p;
 		
 		*p = q->next;
 	x = q->info;
 		
 		return x;
 		
 		freenode(q);
 	}
 }
 
 int check_underflow(nodeptr *p){
 	return (*p == NULL);
 }
