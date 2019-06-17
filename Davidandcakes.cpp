#include<iostream>
#include<stdlib.h>
using namespace std;
void createnode();
void data();
void push(int);
void pop();
struct node
{
	unsigned int cost;
	struct node *next;
}*top=NULL,*temp=NULL;
int main()
{
	data();
	return 0;
}
void createnode()
{
	temp=(struct node*)malloc (sizeof(struct node));
}
void data()
{
	unsigned short test,i,j;
	cout<<"Enter test cases";
	cin>>test;
	unsigned int inputs[test],cost[test];
	for(i=0;i<test;i++)
	{
		cin>>inputs[i];
		if(inputs[i]==2)
		{
		cin>>cost[j];
		j++;
		}
	}
	j=0;
	for(i=0;i<test;i++)
	{
		if(inputs[i]==1)
		pop();
		else if(inputs[i]==2)
	    {
	    createnode();
		push(cost[j]);
		j++;
	    }
	}
}
void push(int price)
{
	if(top==NULL)
	{
		top=temp;
		top->cost=price;
		top->next=NULL;
	}
	else
	{
		temp->next=top;
		top=temp;
		top->cost=price;
		temp=NULL;
	}
}
void pop()
{
	if(top==NULL)
		cout<<"No Cake"<<endl;
	else
	{
		cout<<top->cost<<endl;
		temp=top;
		top=temp->next;
		free(temp);
		temp=NULL;
	}
}
