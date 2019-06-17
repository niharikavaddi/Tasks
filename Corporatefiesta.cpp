#include<iostream>
#include<stdlib.h>
using namespace std;
void createnode();
void data();
void push(int);
void display();
struct node
{
	unsigned int ID;
	struct node *next;
}*top=NULL,*temp=NULL;
int main()
{
  data();
  return 0;	
}
void createnode()
{
	temp=(struct node*) malloc(sizeof(struct node));
}
void data()
{
	unsigned int first,test,num,i;
	cout<<"enter number of test cases";
	cin>>test>>first;
	createnode();
	push(first);
	char name[test];
	for(i=0;i<test;i++)
	{
		cin>>name[i];
		if(name[i]=='F')
		{
		createnode();
		cin>>num;
		push(num);
	    }
	}
	display();
}
void push(int num)
{
	if(top=NULL)
	{
		top=temp;
		top->ID=num;
		top->next=NULL;
		temp=NULL;
	}
	else
	{
		temp->next=top;
		top=temp;
		top->ID=num;
		temp=NULL;
	}
}
void display()
{
	if(top==NULL)
	{
		cout<<"Ball is not yet passed";
	}
	else
	{
		cout<<"Player "<<top->ID;
	}
}
