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
		if(s1.top == -1)
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
            return NULL;
        }
        temp = s1.container[s1.top];
        s1.top--;
        return temp;
    }   
    void main()
    {
        int n,r;
        initialize();
        printf("\n Enter a decimal number ");
        scanf("%d",&n);
        while(n!=0)
        {
            r=n%2;
            push(r);
            n/=2;
        }
        printf("\nPopped Value: \n");
        while(Isempty()==0)
        {
            r=pop();
            printf("%d",r);
        }
    }
