//stack implementation using array//
#include<iostream>
using namespace std;
int stack[100];
int i,n,top;
void push();
void pop();
void peek();
void display();
int main()
{
int ch;
cout<<"enter the size of an array\n";
cin>>n;
i=1;
top=-1;
while (i)
{
cout<<"menu driven list\n";
cout<<"enter the (1-4) number of your choice\n";
cout<<"1.PUSH\n2.POP\n3.peek\n4.display\n5.exit\n";
cin>>ch;
switch(ch)
{
	case 1: push();
	        break;
	case 2: pop();
	        break;
	case 3: peek();
	        break;
	case 4: display();
            break;
	case 5: i=0;
            break;
    default:cout<<"Wrong Choice!!!!"<<endl;
            break;
}
}
return 0; 
}
void push()
{
int x;
cout<<"enter data\n";
cin>>x;
if(top>=n-1)
   {
	cout<<"overflow\n";
   }
else
   {
	top++;
	stack[top]=x;	
   }
}
void pop()
{
	int item;
	if(top==-1)
	{
		cout<<"underflow\n";
	}
	else
	{
		item = stack[top];
		top--;
		cout<<"value"<<item;
	}
}
void peek()
{
	if(top==-1)
	{
		cout<<"underflow\n";
	}
	else
	{
		cout<<stack[top];
	}
}
void display()
{
    if(top>=0)
  {
    cout<<"Elements in the stack are :";
    for(i=top;i>=0;i--)
       cout<<stack[i]<<" ";
    cout<<"\n";
  }
  else
   cout<<"STACK IS EMPTY."<<endl;
}







