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
	PNODE p=NULL;
	PPNODE q=NULL;
	
	p= (PNODE)malloc(sizeof(NODE));

	return 0;
}