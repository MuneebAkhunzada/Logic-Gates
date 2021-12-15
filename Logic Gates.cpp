//11862
//Muhammad Muneeb Akhunzada
//Question for Logic gates
#include<iostream>
using namespace std;
int main()
{
	int inp1,inp2,num;
	do{
		cout<<endl;
	cout<<"\n Enter 1. For NOT gate. ";
	cout<<"\n Enter 2. For AND gate. ";
	cout<<"\n Enter 3. For OR gate. ";
	cout<<"\n Enter 4. For NOR gate. ";
	cout<<"\n Enter 5. For NAND gate. ";
	cout<<"\n Enter 6. For XOR gate. ";
	cout<<"\n Press 0 to exit. ";
	cin>>num;
	if (num==1)
	{
	cout<<"\n Enter First value: ";
	cin>>inp1;
	while(inp1!=0 and inp1!=1 )
	{
		cout<<"\n Enter value 1 or 0 for the input. Try again: ";
		cin>>inp1;
	}
		if(inp1==0)
		{
			inp1=1;
			cout<<"\n The value of NOT gate is "<<inp1;
		}
		else if(inp1==1)
		{
			inp1=0;
			cout<<"\n The value of NOT gate is "<<inp1;
		}
	}
	else if(num==2)
	{
		cout<<"\n Enter First value: ";
		cin>>inp1;
		while(inp1!=0 and inp1!=1)
		{
			cout<<"\n Enter 0 or 1. Try again: ";
			cin>>inp1;
		}
		cout<<"\n Enter Second value: ";
		cin>>inp2;
		while(inp2!=0 and inp2!=1)
		if(inp1==0 || inp1==1)
		{
			cout<<"\n Enter value 0 or 1. Try again: ";
			cin>>inp2;
		}
		cout<<"\n The value of AND gate is "<<(inp1*inp2);
	}
	else if(num==3)
	{
		
		cout<<"\n Enter First value: ";
		cin>>inp1;
		while(inp1!=0 and inp1!=1)
		{
			cout<<"\n Enter 0 or 1. Try again: ";
			cin>>inp1;
		}
		cout<<"\n Enter Second value: ";
		cin>>inp2;
		while(inp2!=0 and inp2!=1)
		{
			cout<<"\n Enter 0 or 1. Try again: ";
			cin>>inp2;
		}
		if(inp1== 0 and inp2==0)
		{
			cout<<"\n The entered values result is 0.";
		}
		else if(inp1==0&&inp2==1)
		{
			cout<<"\n The entered values result is 1.";
		}
		else if(inp1==1&&inp2==0)
		{
			cout<<"\n The entered values result is 1.";
		}
		else if(inp1==1 && inp2==1)
		{
			cout<<"\n The entered values result is 1.";
		}
	}
	else if(num==4)
	{
		cout<<"\n Enter value 1: ";
		cin>>inp1;
		while(inp1!=0 and inp1!=1)
		{
			cout<<"\n Enter 0 or 1. Try again: ";
			cin>>inp1;
		}
		cout<<"\n Enter value 2: ";
		cin>>inp2;
		while(inp2!=0 and inp2!=1)
		{
			cout<<"\n Enter 0 or 1. Try again: ";
			cin>>inp2;
		}
		if(inp1== 0 and inp2==0)
		{
			cout<<"\n The entered values result is 1.";
		}
		else if(inp1==0&&inp2==1)
		{
			cout<<"\n The entered values result is 0.";
		}
		else if(inp1==1&&inp2==0)
		{
			cout<<"\n The entered values result is 0.";
		}
		else if(inp1==1 && inp2==1)
		{
			cout<<"\n The entered values result is 0.";
		}
	}
	else if(num==5)
	{
		cout<<"\n Enter value 1: ";
		cin>>inp1;
		while(inp1!=0 and inp1!=1)
		{
			cout<<"\n Enter 0 or 1. Try again: ";
			cin>>inp1;
		}
		cout<<"\n Enter value 2: ";
		cin>>inp2;
		while(inp2!=0 and inp2!=1)
		{
			cout<<"\n Enter 0 or 1. Try again: ";
			cin>>inp2;
		}
		if(inp1== 0 and inp2==0)
		{
			cout<<"\n The entered values result is 1.";
		}
		else if(inp1==0&&inp2==1)
		{
			cout<<"\n The entered values result is 1.";
		}
		else if(inp1==1&&inp2==0)
		{
			cout<<"\n The entered values result is 1.";
		}
		else if(inp1==1 && inp2==1)
		{
			cout<<"\n The entered values result is 0.";
		}
	}
	else if(num==6)
	{
		cout<<"\n Enter value 1: ";
		cin>>inp1;
		while(inp1!=0 and inp1!=1)
		{
			cout<<"\n Enter 0 or 1. Try again: ";
			cin>>inp1;
		}
		cout<<"\n Enter value 2: ";
		cin>>inp2;
		while(inp2!=0 and inp2!=1)
		{
			cout<<"\n Enter 0 or 1. Try again: ";
			cin>>inp2;
		}
		if(inp1== 0 and inp2==0)
		{
			cout<<"\n The entered values result is 0.";
		}
		else if(inp1==0&&inp2==1)
		{
			cout<<"\n The entered values result is 1.";
		}
		else if(inp1==1&&inp2==0)
		{
			cout<<"\n The entered values result is 1.";
		}
		else if(inp1==1 && inp2==1)
		{
			cout<<"\n The entered values result is 0.";
		}
	}
	}while(num!=0);
}
