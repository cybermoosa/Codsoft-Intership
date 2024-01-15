#include <iostream>
using namespace std;
int input()
{
    int inp=0;
    cout<<"Guess the 4 digit Number"<<endl;
    cout<<"Enter the Number: ";
    cin>>inp;
    if(inp==1)
    {
    	cout<<endl<<"Thank You For Your Time";
    	exit(1);
	}
    return inp; 
}
bool Check(int RandomNumber,int userinput)
{
     if(RandomNumber==userinput)
     {
        cout<<endl<<"CORRECT! PERFECT GUESS";
        cout<<endl<<"Random Number is "<<RandomNumber;
        return true;
     }
     else if(RandomNumber<userinput)
     {
        int diff;
        diff=userinput-RandomNumber;
        if(diff<=100)
        {
            cout<<endl<<"High. Inserted Number is Greater than Random Number"<<endl<<"TRY AGAIN"<<endl;
        }
        else
        {
            cout<<endl<<"Very High. Inserted Number is very Greater than Random Number"<<endl<<"TRY AGAIN"<<endl;
        }
        cout<<endl<<"Random Number is "<<RandomNumber<<" Try Again with new Random Number\n"<<endl;
        return false;
     }
     else if(RandomNumber>userinput)
     {
        int diff;
        diff=RandomNumber-userinput;
        if(diff<=100)
        {
            cout<<endl<<"Low. Inserted Number is Less than Random Number"<<endl<<"TRY AGAIN"<<endl;        
		}
        else
        {
            cout<<endl<<"Very Low. Inserted Number is very Less than Random Number"<<endl<<"TRY AGAIN"<<endl;
        }
        cout<<endl<<"Random Number is "<<RandomNumber<<" Try Again with new Random Number\n"<<endl;
        return false;
     } 
}
void GenrateRandomNumbers(int SeedNumber)
{
    int a=24;
    int b=1;
    int c=SeedNumber;
    int userinput;
    for(int i=0;i<c;i++)
    {
        if(c<1000)
        {
            c=SeedNumber;
        }
        if(i%2==0)
        {
           c=c+b-a;
           a++;          
        }
        else
        {
            c=c-b+a;
            a--;
        }
        userinput=input();
           if(Check(c,userinput))
           {
             break;
           }  
    }
}
int main()
{
    cout<<"\t\t\t TASK 1"<<endl;
    cout<<"\t\t\t Guess The Number"<<endl;
    cout<<"Press 1 to Quit"<<endl;
    int SeedNumber=2004;
    GenrateRandomNumbers(SeedNumber);     
}