#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>

void and_gate();
void or_gate();
void not_gate();
void nand_gate();
void nor_gate();
void xnor_gate();
void xor_gate();

void main()
{
	clrscr();
	int ch;

	char opn;

	do
	{
		clrscr();
		cout<<"\n\t\txxxxxxxxxx LOGIC GATES xxxxxxxxxx\t\t\n";
	   cout<<"\nPlease enter a choice:- \n1-AND gate\t\t2-OR gate\n3-NOT gate\t\t4-NOR gate\n5-NAND gate\t\t6-XOR gate\n7-XNOR gate\t\t8-exit\n\n";
	   cin>>ch;
	   switch(ch)
	   {
		case 1 : and_gate();
			break;
		case 2 : or_gate();
			break;
		case 3 : not_gate();
			break;
		case 4 : nor_gate();
			break;
		case 5 : nand_gate();
			break;
		case 6 : xor_gate();
			break;
		case 7 : xnor_gate();
			break;
		case 8 :
			{
			 cout<<"\n\n\t\t********* THANKS FOR VISITING..!!! ********";
			 getch();
			 exit(0);
			 break;
			}
		default : cout<<"\n\ninvalid choice..!!! Please try again..";
	   }
	   cout<<"\ndo you want to continue ?(y/n)\n ";
	   cin>>opn;

	   if(opn=='n')
	   {
		cout<<"\n\n\t\t********** THANKS FOR VISITING..!!! ***********";
		getch();
		exit(0);
	   }

	}while((opn!='n')||(opn != 'N'));
}
void and_gate()
{
	clrscr();
	cout<<"\n\t\t******** WELCOME TO THE AND GATE TUTORIAL ********\n\n";
	cout<<"SYMBOL\t\tFORMULA\n.(dot)\t\tZ = A.B\n\n(where A,B -> inputs and Z ->output)";
	cout<<"\n\nTRUTH TABLE -\n\tA\tB\tZ\n";
	int a[4] ={1,1,0,0},b[4]={1,0,1,0},z[4];
	for(int i=0;i<4;i++)
	{
		if(a[i]==1 && b[i]==1)
		{
			z[i]=1;
		}
		else
		{
			z[i] = 0;
		}
		cout<<"\t"<<a[i]<<"\t"<<b[i]<<"\t"<<z[i]<<endl;
	}
}

void or_gate()
{
	clrscr();
	cout<<"\n\t\t******** WELCOME TO THE OR GATE TUTORIAL ********\n\n";
	cout<<"SYMBOL\t\tFORMULA\n+(plus)\t\tZ = A+B\n\n(where A,B -> inputs and Z ->output)";
	cout<<"\n\nTRUTH TABLE -\n\tA\tB\tZ\n";
	int a[4] ={1,1,0,0},b[4]={1,0,1,0},z[4];
	for(int i=0;i<4;i++)
	{
		if((a[i]==1 && b[i]==0)||(a[i]==1 && b[i]==1))
		{
			z[i]=1;
		}
		else
		{
			z[i] = 0;
		}
		cout<<"\t"<<a[i]<<"\t"<<b[i]<<"\t"<<z[i]<<endl;
	}
}
void not_gate()
{
	clrscr();
	cout<<"\n\t\t******** WELCOME TO THE NOT GATE TUTORIAL ********\n\n";
	cout<<"SYMBOL\t\tFORMULA\n!\t\tZ =!A\n(exclaimination mark)\n\n(where A -> inputs and Z ->output)";
	cout<<"\n\nTRUTH TABLE -\n\tA\tZ\n";
	int a[4] ={1,1,0,0},z[4];
	for(int i=0;i<4;i++)
	{
		if(a[i]==1)
		{
			z[i]= 0;
		}
		else
		{
			z[i] = 1;
		}
		cout<<"\t"<<a[i]<<"\t"<<z[i]<<endl;
	}
}

void nand_gate()
{
	clrscr();
	cout<<"\n\t\t******** WELCOME TO THE NAND GATE TUTORIAL ********\n\n";
	cout<<"FORMULA\t\tZ = (A.B)'\n\n(where A,B -> inputs and Z ->output)";
	cout<<"\n\nTRUTH TABLE -\n\tA\tB\tZ\n";
	int a[4] ={1,1,0,0},b[4]={1,0,1,0},z[4];
	for(int i=0;i<4;i++)
	{
		if(a[i]==1 && b[i]==1)
		{
			z[i]=0;
		}
		else
		{
			z[i] = 1;
		}
		cout<<"\t"<<a[i]<<"\t"<<b[i]<<"\t"<<z[i]<<endl;
	}
}
void nor_gate()
{
	clrscr();
	cout<<"\n\t\t******** WELCOME TO THE NOR GATE TUTORIAL ********\n\n";
	cout<<"FORMULA\t\tZ = (A+B)'\n\n(where A,B -> inputs and Z ->output)";
	cout<<"\n\nTRUTH TABLE -\n\tA\tB\tZ\n";
	int a[4] ={1,1,0,0},b[4]={1,0,1,0},z[4];
	for(int i=0;i<4;i++)
	{
		if(a[i]==1 && b[i]==1)
		{
			z[i]=0;
		}
		else
		{
			z[i] = 1;
		}
		cout<<"\t"<<a[i]<<"\t"<<b[i]<<"\t"<<z[i]<<endl;
	}
}
void xor_gate()
{
	clrscr();
	cout<<"\n\t\t******** WELCOME TO THE XOR GATE TUTORIAL ********\n\n";
	cout<<"FORMULA\t\tZ = A.B' + A'.B\n\n(where A,B -> inputs and Z ->output)";
	cout<<"\n\nTRUTH TABLE -\n\tA\tB\tZ\n";
	int a[4] ={1,1,0,0},b[4]={1,0,1,0},z[4];
	for(int i=0;i<4;i++)
	{
		if((a[i]==1 && b[i]==0)||(a[i]==0 && b[i]==1))
		{
			z[i]=1;
		}
		else
		{
			z[i] = 0;
		}
		cout<<"\t"<<a[i]<<"\t"<<b[i]<<"\t"<<z[i]<<endl;
	}
}
void xnor_gate()
{
	clrscr();
	cout<<"\n\t\t******** WELCOME TO THE XNOR GATE TUTORIAL ********\n\n";
	cout<<"FORMULA\t\tZ =(A.B' + A'.B)'\n\n(where A,B -> inputs and Z ->output)";
	cout<<"\n\nTRUTH TABLE -\n\tA\tB\tZ\n";
	int a[4] ={1,1,0,0},b[4]={1,0,1,0},z[4];
	for(int i=0;i<4;i++)
	{
		if((a[i]==1 && b[i]==0)||(a[i]==0 && b[i]==1))
		{
			z[i]=0;
		}
		else
		{
			z[i] = 1;
		}
		cout<<"\t"<<a[i]<<"\t"<<b[i]<<"\t"<<z[i]<<endl;
	}
}
