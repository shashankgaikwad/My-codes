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

void fun(     )
{

}

void gun(     )
{

}

int main()
{
	PNODE first =NULL;

	fun(first);

	gun(&first);

	return 0;
}