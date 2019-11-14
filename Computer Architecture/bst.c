#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Node{
	int data;
	struct Node* left;
	struct Node* right;
} Node;

Node* Create(int data){
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}

void printNode(Node *rootNode){
	if(rootNode==NULL){
		return;
	}
 	printf("(");
	printNode(rootNode->left);
	printf("%d",rootNode->data);
	printNode(rootNode->right);
	printf(")");
	
}

Node* insertNode(Node* rootNode,int data){
	if(rootNode == NULL){
		rootNode=Create(data);
	}
	else if(rootNode->data<=data){
		rootNode->right = insertNode(rootNode->right,data);
	}
	else{
		rootNode->left = insertNode(rootNode->left,data);
	}
	return rootNode;
}
Node* minNode(Node* rootNode){
	while(rootNode->left!=NULL){
		rootNode=rootNode->left;
	}
	return rootNode;
}

Node* deleteNode(Node* rootNode,int data){
	if(rootNode->data>data){
		rootNode->left= deleteNode(rootNode->left,data);
	}
	else if(rootNode->data<data){
		rootNode->right= deleteNode(rootNode->right,data);
	}
	else{
		if(rootNode->left==NULL&&rootNode->right==NULL){
			free(rootNode);
			rootNode=NULL;
		}
		else if(rootNode->right==NULL){
			Node* tempNode=rootNode;
			rootNode = rootNode->left;
			free(tempNode);
		}
		else if(rootNode->left==NULL){
			Node* tempNode=rootNode;
			rootNode=rootNode->right;
			free(tempNode);
		}
		else{
			Node* tempNode=minNode(rootNode->right);//find smallest value in right subtree
			rootNode->data=tempNode->data;//take value of smallest value
			rootNode->right=deleteNode(rootNode->right, tempNode->data);	//Delete original smallest value node in right subtree
		}
	}
	return rootNode;
}

int searchNode(Node* rootNode,int data){
	if(rootNode==NULL){
		return 0;
	}
	else if(data==rootNode->data){
		return 1;
	}
	else if(rootNode->data<=data){
		return searchNode(rootNode->right,data);
	}
	else{
		return searchNode(rootNode->left,data);
	}
}


int main(){
	char a='i';
	int c;
	Node* root;
	root = NULL;
	/*scanf("%c",&a);
	if(a=='i'||a=='d'||a=='s'||a=='p'){
		scanf("%d",&c);
		 if(a=='p'){
                        if(root==NULL){
                                printf("\n");
                        }
                        else{
                                printNode(root);
                                printf("\n");
                        }
		}
                
		 if(a=='i'){
                        if(searchNode(root,c)==1){
                                printf("duplicate\n");

                        }
                        else{
                                root=insertNode(root,c);
                                printf("inserted\n");
                        }
                }
                else if(a=='s'){
                        if(searchNode(root,c)==1){
                                printf("present\n");
                        }
                        else{
                                printf("absent\n");
                        }
                }
                else if(a=='d'){
                        if(searchNode(root,c)==0){
                                printf("absent\n");
                        }
                        else{
                                root=deleteNode(root,c);
                                printf("deleted\n");
                        }

                }
	}
	else{
		return 0;
	}*/

	
	while(a=='i'||a=='d'||a=='s'||a=='p'){
		scanf(" %c",&a);
		if(feof(stdin)){
			break;
		}
		if(a=='p'){
			if(root==NULL){
				printf("\n");
			}
			else{
				printNode(root);
				printf("\n");
			}	
		//do something
			continue;
		}
		if(a!='i'&&a!='d'&&a!='s'&&a!='p'){
			break;
		}
		scanf("%d",&c);
		if(a=='i'){
			if(searchNode(root,c)==1){
				printf("duplicate\n");
				
			}
			else{
				root=insertNode(root,c);
				printf("inserted\n");
			}
		}
		else if(a=='s'){
			if(searchNode(root,c)==1){
				printf("present\n");
			}
			else{
				printf("absent\n");
			}
		}
		else if(a=='d'){
			if(searchNode(root,c)==0){
				printf("absent\n");
			}
			else{
			      	root=deleteNode(root,c);
				printf("deleted\n");
			}

		}

		if(feof(stdin)){
			break;
		}	
			
	}
	free(root);




return 0;
}
