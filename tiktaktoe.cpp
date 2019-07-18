#include<stdio.h>
int call(int);
int logic1(int);
int logic2(int);
void userdata();
int main()
{
    userdata();	
}
void userdata()
{
	char number[3][3];
	int i,j,win=0,num,z=0;
	char user1[5],user2[5];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			number[i][j]='_';
		}
	}
	printf("Enter user1 name:");
	scanf("%s",user1);
	printf("Enter user2 name:");
	scanf("%s",user2);
	printf("LETS START THE GAME. Player1:%s\t PLayer2:%s\n\n",user1,user2);
	while(z<9&&win!=10&&win!=20)
	{	
	int a,b;
	num=call(0);
    a=logic1(num);
    b=logic2(num);
    if(number[a][b]=='_')
    {
    number[a][b]='x';
    z++;
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("| %c ",number[i][j]);
		}
		printf("|\n_____________\n");
	}
   }
    else
    {
    printf("already entered number\n");
    num=call(0);
    }
    if((number[0][0]=='x'&&number[0][1]=='x'&&number[0][2]=='x')||(number[1][0]=='x'&&number[1][1]=='x'&&number[1][2]=='x')||(number[2][0]=='x'&&number[2][1]=='x'&&number[2][2]=='x')||(number[0][0]=='x'&&number[1][0]=='x'&&number[2][0]=='x')||(number[0][1]=='x'&&number[1][1]=='x'&&number[2][1]=='x')||(number[0][2]=='x'&&number[1][2]=='x'&&number[2][2]=='x')||(number[0][2]=='x'&&number[1][1]=='x'&&number[2][0]=='x')||(number[0][0]=='x'&&number[1][1]=='x'&&number[2][2]=='x'))
	{
		win=10;
	}
    if(win!=10&&z<8)
    {
    num=call(1);
    a=logic1(num);
    b=logic2(num);
    if(number[a][b]=='_')
    {
    number[a][b]='o';
    z++;
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("| %c ",number[i][j]);
		}
		printf("|\n_____________\n");
	}
   } 
    else
    {
    printf("already entered number\n");
    num=call(1);
    }
    if((number[0][0]=='o'&&number[0][1]=='o'&&number[0][2]=='o')||(number[1][0]=='o'&&number[1][1]=='o'&&number[1][2]=='o')||(number[2][0]=='o'&&number[2][1]=='o'&&number[2][2]=='o')||(number[0][0]=='o'&&number[1][0]=='o'&&number[2][0]=='o')||(number[0][1]=='o'&&number[1][1]=='o'&&number[2][1]=='o')||(number[0][2]=='o'&&number[1][2]=='o'&&number[2][2]=='o')||(number[0][2]=='o'&&number[1][1]=='o'&&number[2][0]=='o')||(number[0][0]=='o'&&number[1][1]=='o'&&number[2][2]=='o'))
	{
		win=20;
	}
   }
if(win==10)
{
	printf("%s won",user1);
}
else if(win==20)
{
	printf("%s won",user2);
}
else
{
	printf("\n");
}
}
if(win==0)
{
	printf("better luck next time both of you\n");
}
}
int logic1(int num)
{
	if(num==1||num==2||num==3)
	return 0;
	else if(num==4||num==5||num==6)
	return 1;
	else
	return 2;
}
int logic2(int num)
{
    if(num==1||num==4||num==7)
	return 0;
	else if(num==2||num==5||num==8)
	return 1;
	else
	return 2;
}
int call(int c)
{
	int number;
	printf("Player%d's turn\n Enter any number between 1-9: ",c+1);
	scanf("%d",&number);
	if(number>0&&number<10)
	return number;
	else
	{
		printf("Invalid number\n");
		call(c);
	}
}


