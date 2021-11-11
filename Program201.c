#include<stdio.h>
#include<stdlib.h>

struct Node
{

	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

int main()
{

 	PNODE First =NULL;
	//struct node *First=NULL;


	return 0;
}


//We have to perfrom 8 operations on Linklist 
//Display()- It displays the contains of Linklist
//Count()- It will count the number of elements from linllist.
//InsertFirst()- It will insert new node at first Position.
//InsertLast()- It will insert new node at last Position.
//InsertAtPos()-It will insert new node at any given Position.
//DeleteFirst()-It will remove the first node.
//DeleteLast()-It will remove the last node.
//DeleteAtPos()-It will remove new node at any given Position.
