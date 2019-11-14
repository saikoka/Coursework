#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node{
	int data;
	struct node* next;
} node;

node* create(int data,node* next){
	node* newnode = (node*)malloc(sizeof(node));
	if(newnode == NULL)
	{
		printf("Error.\n");
		exit(0);
	}
	newnode->data = data;
	newnode->next = next;
	return newnode;
}
int countNodes(node *head){
	int counter=0;
	node* x = head;
	while(x!=NULL){
		counter++;
		x = x->next;
	}
	return counter;
}
void printNodes(node *head){
	node* x = head;
	while(x!=NULL){
		printf(" %d",x->data);
		x=x->next;
	}
}
int contains(node *head, int value){
	node* x = head;
	while(x!=NULL){
		if(x->data==value){
			return 1;
		}
	
		x=x->next;
	}
	return 0;
}

int main(){
	char command='i';
	int value=0;
	node* head = create(-40921, NULL);
	/*scanf(" %c",&command);
	if(command=='i'){
		head->data=value;
		printf("1 : %d\n",head->data);
		
	}
	else if(command=='d'){
		printf("0 :");
	}
	else if((command!='d'&&command!='i')){
		return 0;
	}
	scanf("%d",&value);
	if(feof(stdin)){
		return 0;
	}*/
		
	while((command=='i'||command=='d')){
		scanf(" %c",&command);
		if(feof(stdin)){
			break;
		}
		if(command!='i'&&command!='d'){
			break;
		}
		scanf("%d",&value);
		if(command=='i'){
			if(head->data==-40921){
				head->data=value;
				printf("1 : %d\n",head->data);
				continue;
			}
			if(contains(head,value)==1){
				printf("%d :",countNodes(head));
				printNodes(head);
				printf("\n");
			}
			else{
				node* new = create(value, NULL);
				node* place= head;
				while(place->next!=NULL){
					place = place->next;
				}
				if(head->data==-40921&&countNodes(head)==1){
					head->data=value;
					printf("%d :",countNodes(head));
					printNodes(head);
					printf("\n");
				}
				else if(new->data<head->data){
					new->next=head;
					head=new;
					printf("%d :",countNodes(head));
					printNodes(head);
					printf("\n");
				}
				else if(new->data>place->data){
					place->next= new;
					printf("%d :",countNodes(head));
					printNodes(head);
					printf("\n");
				}
				else{
					node* inBetween = head;
					node* previous =head;
					while(new->data>inBetween->data&&inBetween->next!=NULL){
						previous = inBetween;
						inBetween = inBetween->next;
					}
					previous->next=new;
					new->next=inBetween;
					printf("%d :",countNodes(head));
					printNodes(head);
					printf("\n");
				}
					
				
			}
		

		}
		else if(command=='d'){
			
			if(countNodes(head)==1&&head->data==-40921){
				printf("0 :\n");
				continue;
			}
			else if(contains(head,value)==0){
				printf("%d :",countNodes(head));
				printNodes(head);
				printf("\n");
			}
			else{
				node* place= head;
				node* previous=head;
				while(place->next!=NULL){
					previous=place;
					place = place->next;
				}
				if(head->data==value){
					if(head->data==value&&countNodes(head)==1){
						node *start = head;
						head = head->next;
						start->next = NULL;
						printf("0 :\n");
						main();
					}
					else{
					node *start = head;
					head = head->next;
					start->next = NULL;
					}
				
			
					printf("%d :",countNodes(head));
					printNodes(head);
					printf("\n");
				}
				else if(place->data==value){
					previous->next=NULL;
					printf("%d :",countNodes(head));
                                        printNodes(head);
                                        printf("\n");
				}
				else{
					node* inBetween=head;
					node* previous = head;
					while(value>inBetween->data&&inBetween->next!=NULL){
						previous=inBetween;
						inBetween = inBetween->next;
					}
					previous->next=inBetween->next;
					printf("%d :",countNodes(head));
					printNodes(head);
					printf("\n");
				}


			}
			
	
		}
		if(feof(stdin)){
			break;
		}
		
	
		
}
		
	free(head);
	return 0;

}

