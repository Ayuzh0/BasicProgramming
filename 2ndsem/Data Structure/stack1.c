    #include<stdio.h>
    #include<conio.h>
    typedef struct Stack1
    {
	    int container[50];
	    int top;
    }Stack;
    Stack s1;
    void initialize()
    {
	    s1.top=-1;
    }
	int Isfull()
	{
		if(s1.top == 49)
			return 1;
		else
			return 0;
	}
	int Isempty()
	{
		if(s1.top == 1)
			return 1;
		else
			return 0;
	}
    void push(int val)
    {
        if(Isfull()==1) 
        {
	        printf("stack is full. No more value can be pushed\n");
	        return;
        }
        s1.top++;
        s1.container[s1.top]=val;
    }
    int pop()
    {
	    int temp;
	    if(Isempty()==1)
	    {
		    printf("No more value to pop");
            return 0;
        }
        temp = s1.container[s1.top];
        s1.top--;
        return temp;
    }   
    void main()
    {
        int choice=1,n;
        initialize();
        while(1)
        {
            printf("\n Stack Menu Options \n 1. push \n 2. pop value from stack.\n Enter 0 to stop\n");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                printf("Enter a value to be entered\n");
                scanf("%d",&n);
                push(n);
                break;
                case 2:
                printf("The value %d has been popped\n",pop());
                break;
                case 0:
                return;
                default:
                printf("Invalid choice\n");
            }       
        }
    }
