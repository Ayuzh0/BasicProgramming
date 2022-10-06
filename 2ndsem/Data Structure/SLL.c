#include<stdio.h>
#include<conio.h>
typedef struct SLL1
{
  int data;
  struct SLL1 *next;
}SLL;
SLL *head;

void insert_first(int val)
{
	SLL *newnode;
	newnode = malloc(sizeof(SLL));
	newnode->data = val;
	newnode->next = head;
	newnode = head;
}

void insert_last(int val)
{
	SLL *temp = head;
	SLL *newnode;
	newnode = (SLL*)malloc(sizeof(SLL));
	newnode->data = val;
	newnode->next = (SLL*)NULL;
	if(head == (SLL*) NULL)
	{	
		head=newnode;
		return;
	}
	while(temp-> next!=(SLL*)NULL)
		temp = temp-> next;
	temp-> next = newnode;
}

void insert_after(int val, int ele)
{
    SLL *newnode;
    SLL *temp=head;
    while(temp!=(SLL*)NULL)
    {
        if(temp->data==ele)
        {
            newnode=(SLL*)malloc(sizeof(SLL));
            newnode->data = val;
            newnode ->next = temp->next;
            temp->next=newnode;
            return;
        }
        temp=temp->next;
    }
    printf("\nValue not found");
}

//Insert before any node

int delete_first()
{
	int val;
	SLL *temp=head;
	if(temp==(SLL*)NULL)
	{
		printf("\n No node to delete");
		return NULL;
	}
	val=temp->data;
	head=temp->next;
	free(temp);
	return val;
}

void delete_any(int ele)
{
	SLL *parent;
	SLL *temp=head;
	while(temp!=(SLL*)NULL)
	{
		if(temp->data ==ele)
		{
			parent ->next = temp-> next;
			free(temp);
			return;
		}
		parent = temp;
		temp=temp->next;
	}
	printf("\n Node not found");
}

void inorder(SLL *temp)
{
    if(temp== (SLL*)NULL)
        return;
    for(temp = head; temp!= (SLL*)NULL; temp=temp->next)
        printf("%d",temp->data);
}

void postorder(SLL *temp)
{
    if(temp==(SLL*)NULL)
        return;
    postorder(temp->next);
    printf("%d",temp->data);
}

void main()
{
	int ch,val,ele;
	initialize();
	while(1)
	{
		printf("\nSingly linked list Menu");
		printf("\n------------------------");
		printf("\n1. Insert at first");
		printf("\n2. Insert at last");
		printf("\n3. Insert before any node");
		printf("\n4. Insert after any node");
		printf("\n5. Delete first node");
		printf("\n6. Delete last node");
		printf("\n7. Delete any node");
		printf("\n8. Delete whole list");
		printf("\n9. In order traversal");
		printf("\n10. Post order traversal");
		printf("\n0. Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0:
				delete_all();
				printf("\nBye");
				return;
			case 1:
				printf("\nEnter a value to insert at first");
				scanf("%d",&val);
				insert_first(val);
				break;
			case 2:
				printf("\nEnter a value to insert at last");
				scanf("%d",&val);
				insert_last(val);
				break;
			case 3:
				printf("\nEnter a value to insert");
				scanf("%d",&val);
				printf("\nEnter the value to insert before");
				scanf("%d",&ele);
				insert_before(val,ele);
				break;
			case 4:
				printf("\nEnter a value to insert");
				scanf("%d",&val);
				printf("\nEnter the value to insert after");
				scanf("%d",&val);
				insert_after(val,ele);
				break;
			case 5:
				val=delete_first();
				if(val!=NULL)
					printf("\nDeleted value= %d",val);
				break;
			case 6:
				val=delete_last();
				if(val!=NULL)
					printf("\nDeleted value= %d",val);
				break;
			case 7:
				printf("\nEnter a value to be deleted");
				scanf("%d",&val);
				delete_any(val);
				break;
			case 8:
				delete_all();
				break;
			case 9:
				printf("\nIn order traversal list"):
				inorder();
				break;
			case 10:
				printf("\nPost order traversal list"):
				postorder();
				break;
		}//end of switch
	}//end of while
}//end of main
