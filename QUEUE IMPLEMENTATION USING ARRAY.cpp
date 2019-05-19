//c program to implement queue using array ;
#include<stdio.h>
#include<stdlib.h>
# define MAX 50
void insert();
void delele();
void show();
int que_arr[MAX];
int rear=-1;
int front=-1;
int main()
{
	int choice;
	printf("enter any choice from the given option below:\n");
	while(1)
	{
		printf("1:insert element  to queue\n");
		printf("2: delete element from queue\n");
		printf("3: show an element of queue\n");
		printf("4: exit\n");
		printf("Enter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				delele();
				break;
			case 3:
				show();
				break;
			case 4:
				exit(1);
				break;
			default: 
			    printf("wrong choice:");
		}
	}
}
void insert()
{
   int add_item;
   printf("Insert the element in queue\n");
   scanf("%d",&add_item);
   if(rear==MAX-1)
   {
   	printf("queue is overflow\n");
   }
   else
   {
   	if(front==-1 && rear==-1)
   	{
   		
   		rear=rear+1;
   		que_arr[rear]=add_item;
   		
   	}
   	else
   	{
   		rear=rear+1;
   		que_arr[rear]=add_item;
   	}
   }
   front=0;
}
void delele()
{
	if(front==-1 && rear==-1)
	{
		printf("queue is underflow\n");
		
	}
	else
	{
	    printf("Element deleted from queue is : %d\n", que_arr[front]);

        front = front + 1;
		
	}
}
void show()
{
	int i;
	if(front==-1)
	{
		printf("queue is empty:\n");
	}
	else
	{
		printf("Queue is :\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d\t", que_arr[i]);
		}		
		printf("\n");			
	}
}
