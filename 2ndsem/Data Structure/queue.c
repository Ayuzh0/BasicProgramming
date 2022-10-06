#include<stdio.h>
#include<conio.h>
typedef struct Queue1
{	
	int rear;
	int container[50];
	int front;
}Queue;
Queue Q1;

void initialize()
{
	Q1.front = -1;
    Q1.rear = -1;
}

int isempty()
{
	if(Q1.front==-1 && Q1.rear==-1)
		return 1;
	else
		return 0;
}

int isfull()
{
	if(Q1.rear<49)
		return 0; //Not full
	if(Q1.rear == 49 && Q1.front>0)
		return 2; //Partial full
	return 1; //complete full
}

void enqueue(int val)
{
	int i,j,k;
    if(isempty()==1)
	{
		Q1.front =0;
		Q1.rear=0 ;
		Q1.container[Q1.rear]=val;
		return;
	}
	k=isfull();
	if(k==0)

	{
		Q1.rear++;
		Q1.container[Q1.rear]=val;
		return;
	}
	if(k==1)
	{
		printf("\nQueue is full");
		return;
	}
	if(k==2) //partial full
	{
		j=0;
		for(i=Q1.front;i<=Q1.rear;i++)
		{
			Q1.container[j]=Q1.container[i];
            j++;
		}
		Q1.rear=Q1.rear-Q1.front;
		Q1.front=0;
		Q1.rear++;
		Q1.container[Q1.rear]=val;
	}
}

int dequeue()
{
    int temp;
    if(isempty()==1)
    {
        printf("\n Queue empty");
        return NULL;
    }
    if(Q1.rear==Q1.front)
    {
        temp=Q1.container[Q1.front];
        Q1.front=-1;
        Q1.rear=-1;
        return temp;
    }
    temp = Q1.container[Q1.front];
    Q1.front++;
    return temp;
}
void main()
{
    int ch,val,temp;
    initialize();
    do
    {
        printf("\n Queue Menu");
        printf("\n-------------");
        printf("\n1. Enqueue");
        printf("\n2.Dequeue");
        printf("\n0.Exit");
        printf("\n Enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 0: printf("Good Bye\n");
                    return;
            case 1: //Enqueue - insert a value
                    printf("\nEnter a value to insert:");
                    scanf("%d",&val);
                    enqueue(val);
                    break;
            case 2://Dequeue - delete a value
                    temp=dequeue();
                    if(temp == NULL)
                        printf("\n No data deleted");
                    else
                        printf("\n deleted: %d", temp);
        }
    } while (1);
}