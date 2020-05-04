#include<stdio.h>
void printlistelemet();
void first_position();
void insertion();
struct node{//creating the node 
	int data;
	node *next;//store the address of next node
};
void printlistelemet(node *n)
{
	while(n!=NULL){//it's chack upto last node.
		
	printf("%d=>",n->data);
	n=n->next;// it's increamet the values.
	}
}
void first_position(node *n,int data);
	{
		//create a new node 
		node *new_node=new node();
		new_node->data=data;//store the data
		new_node->next=head->next;//put the adderss of head's next address into the new node
		head->next=new_node;


	}
void insertion(node *n,int data);
{
	int r;
	printf("Enter the position : ");
	scanf("%d",&r);
	while(n->next<r){
		n=n->next;
	}
	node new_node1=new node();
	new_node->data=data;
	new_node2=n;
	new_node1->next=n->next;
	new_node2->next=new_node1;

}
int main () 
{
	node *head=NULL;
	node *second=NULL;
	node *third=NULL;

	head=new node();
	second=new node();
	third=new node();

	head->data=10;
	head->next=second;

	second->data=11;
	second->next=third;

	third->data=12;
	third->next=NULL;
	first_position(head,5);
	insertion(head,20);
	printlistelemet(head);

	return 0;
}