#include<iostream>
using namespace std;
int Multiplication(int x,int y)
{
	return x*y;
}
int Addition(int x,int y)
{
	return x+y;
}
int Subtraction(int x,int y)
{
	return x-y;
}
int Division(int x,int y)
{
	return x/y;
}
int main()
{
	cout<<"\t\t\t Task 2 "<<endl;
	cout<<"\t\t\t Calculator "<<endl;
	int x,y,Answer;
	char choice;
    cout<<"Enter the value of x: ";
	cin>>x;
	cout<<"Enter the value of y: ";
	cin>>y;
	cout<<"\n Press 'e' to Quit \n";
	for(;;)
	{	
	cout<<" Press 'a' for Addition \n Press 'b' for Subtraction \n Press 'c' for Multiplication \n Press 'd' for Division: ";
	cin>>choice;
	switch(choice)
	{
	   case 'a':
	         	Answer=Addition(x,y);
	         	cout<<"Answer= "<<Answer<<endl;
	         	break;
	   case 'b':
	         	Answer=Subtraction(x,y);
	         	cout<<"Answer= "<<Answer<<endl;
				break;
	   case 'c':
	          	Answer=Multiplication(x,y);
	         	cout<<"Answer= "<<Answer<<endl;
				break;
	   case 'd':
	         	Answer=Division(x,y);
	         	cout<<"Answer= "<<Answer<<endl;
	         	break;
	   case 'e':
	           cout<<endl<<"Thank You";
			   exit(1);      	
	   default:
	         cout<<endl<<"Invalid "<<endl;
			 	
	}
   }
}