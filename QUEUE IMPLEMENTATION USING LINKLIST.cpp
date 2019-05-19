#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
struct Node* front= NULL;
struct Node* rear= NULL;
void enque(int x);
void deque();
void show();
int d;
int main()
{
	int choice;
	printf("---------------Enter the choice given below--------------:\n");
	while(1)
	{
	printf("1: insert element into queue:\n");
	printf("2: delete elelment from queue:\n");
	printf("3: show the element of queue:\n");
	printf("4: exit\n");
	printf("Enter your choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter element to be inserted:\n");
			scanf("%d",&d); 
			enque(d);
			break;
		case 2:
			deque();
			break;
		case 3:
			show();
			break;
		case 4:
			exit(1);
			break;
		default:
			printf("wrong choice entered:");
	}
	}
}
void enque(int x)
{
	struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
	if(front==NULL && rear==NULL)
	{
		temp->data=x;
		temp->next=NULL;
		front=rear=temp;
	}
	else
	{
		temp->data=x;
		temp->next=NULL;
		rear->next=temp;
		rear=temp;
	}
}
void deque()
{
	struct Node*temp=front;
	if(front==NULL)
	{
		printf("queue is underflow");
	}
	if(front==rear)
	{
		front=rear=NULL;
	}
	else
	{
	front=front->next;
	} 
	free(temp);
}
void show()
{
	struct Node*temp=front;
	if(front==NULL)
	{
		printf("queue is empty:");
	}
	else
	{
		while(temp!=NULL)
		{
	 	printf("%d\t",temp->data);
	 	temp=temp->next;
	    }
	}
	printf("\n");
}
