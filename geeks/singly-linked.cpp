#include<iostream>

using namespace std;

struct node{
	int data;
	struct node *next;
}

void push(struct node** head,int d){
	struct node* new_node = (struct node*) malloc(sizeof(struct node));
	new_node->data = d;
	new_node->next = (*head);
	(*head) = new_node;
}

void insertafter(struct node* prev,int d){
	struct node* new_node = (struct node*) malloc(sizeof(struct node));
	new_node->data = d;
	new_node->next = prev->next;
	prev->next     = new_node;	
}

void append(struct node** head,int d){
	struct node* new_node = (struct node*) malloc(sizeof(struct node));
	new_node->data = d;
	new_node->next = NULL;
	if(*head ==NULL){
		*head = new_node;
		return;
	}
	struct node *last = *head;
	while(last->next!=NULL)
		last=last->next;
	last->next = new_node;
	return;
}

int main(){
		
}
