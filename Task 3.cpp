#include<iostream>
using namespace std;
void StartMenu();

void printgridposition()
{
	int grid[3][3];
	for(int j=0;j<3;j++)
	{
		grid[0][j]=j+1;
		grid[1][j]=j+4;
		grid[2][j]=j+7;
	}
	for(int i=0;i<3;i++)
	{
		cout<<"\t\t\t";
		for(int j=0;j<3;j++)
		{
			cout<<grid[i][j]<<" ";
		}
		cout<<endl;
	}
}

class TicTacToe
{
	char** grid;
public:
    TicTacToe()
	{
	    grid=new char*[3];
	    for(int i=0;i<3;i++)
	    {
	    	grid[i]=new char[3];
	    	for(int j=0;j<3;j++)
	    	{
	    		grid[i][j]='*';
			}
		}
	}
	//
	void Checkwin(char playerSymbol)
    {
        //
        char ch;
        for(int i=0;i<3;i++)
        {
            if(grid[i][0]==playerSymbol && grid[i][1]==playerSymbol && grid[i][2]==playerSymbol)
            {
                cout<<"Player "<<playerSymbol<<" wins!"<<endl;
                cout<<"Enter the 'Y'for Yes or 'N' for No: ";
				cin>>ch;
				if(ch=='Y' || ch=='y')
				{
					cout<<endl<<"Start Game Again"<<endl;
					StartMenu();
				}
				else if(ch=='N' || ch=='n')
				{
					cout<<endl<<"Thank You For Playing "<<endl;
					exit(0);
				}
            }
        }

        //
        for(int j=0;j<3;j++)
        {
            if(grid[0][j]==playerSymbol && grid[1][j]==playerSymbol && grid[2][j]==playerSymbol)
            {
                cout<<"Player "<<playerSymbol<<" wins!"<<endl;
                cout<<"Enter the 'Y'for Yes or 'N' for No: ";
				cin>>ch;
				if(ch=='Y' || ch=='y')
				{
					cout<<endl<<"Start Game Again"<<endl;
					StartMenu();
				}
				else if(ch=='N' || ch=='n')
				{
					cout<<endl<<"Thank You For Playing "<<endl;
					exit(0);
				}
            }
        }

        // 
        if(grid[0][0]==playerSymbol && grid[1][1]==playerSymbol && grid[2][2]==playerSymbol)
        {
            cout<<"Player "<<playerSymbol<<" wins!"<<endl;
            cout<<"Enter the 'Y'for Yes or 'N' for No: ";
				cin>>ch;
				if(ch=='Y' || ch=='y')
				{
					cout<<endl<<"Start Game Again"<<endl;
					StartMenu();
				}
				else if(ch=='N' || ch=='n')
				{
					cout<<endl<<"Thank You For Playing "<<endl;
					exit(0);
				}
        }

        if(grid[0][2]==playerSymbol && grid[1][1]==playerSymbol && grid[2][0]==playerSymbol)
        {
            cout<<"Player "<<playerSymbol<<" wins!"<<endl;
            cout<<"Enter the 'Y'for Yes or 'N' for No: ";
				cin>>ch;
				if(ch=='Y' || ch=='y')
				{
					cout<<endl<<"Start Game Again"<<endl;
					StartMenu();
				}
				else if(ch=='N' || ch=='n')
				{
					cout<<endl<<"Thank You For Playing "<<endl;
					exit(0);
				}
        }

        // 
        int count = 0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(grid[i][j]!='*')
                    count++;
            }
        }

        if(count==9)
        {
            cout<<"It's a draw!"<<endl;
            cout<<"Enter the 'Y'for Yes or 'N' for No: ";
				cin>>ch;
				if(ch=='Y' || ch=='y')
				{
					cout<<endl<<"Start Game Again"<<endl;
					StartMenu();
				}
				else if(ch=='N' || ch=='n')
				{
					cout<<endl<<"Thank You For Playing "<<endl;
					exit(0);
				}
        }
    }
	//
	bool Insert(char a,int pos)
	{
       
		switch(pos)
		{
			case 1:
				if(grid[0][0]=='*')
				{
				  grid[0][0]=a;
				  Checkwin(a);
				  break;
				}
				else{
					return false;
				}
			case 2:
			     if(grid[0][1]=='*')
			     {
			     	grid[0][1]=a;
					Checkwin(a); 	
				    break;
				 }
				 else{
					return false;
				}
			case 3:
				if(grid[0][2]=='*')
				{
					grid[0][2]=a;
					Checkwin(a);
				    break;
				}
				else{
					return false;
				}
			case 4:
				if(grid[1][0]=='*')
				{
					grid[1][0]=a;
					Checkwin(a);
				    break;
				}
				else{
					return false;
				}
			case 5:
				if(grid[1][1]=='*')
				{
					grid[1][1]=a;
					Checkwin(a);
				    break;
				}
				else{
					return false;
				}
			case 6:
				if(grid[1][2]=='*')
				{
					grid[1][2]=a;
					Checkwin(a);
				    break;
				}
				else{
					return false;
				}   
			case 7:
				if(grid[2][0]=='*')
				{
					grid[2][0]=a;
					Checkwin(a);
				    break;
				}
			    else{
					return false;
				} 
			case 8:
				if(grid[2][1]=='*')
				{
					grid[2][1]=a;
					Checkwin(a);
				    break;
				}
			    else{
					return false;
				} 
			case 9:
				if(grid[2][2]=='*')
				{
					grid[2][2]=a;
					Checkwin(a);
				    break;
				}
			    else{
					return false;
				} 
		default:
		   		cout<<endl<<"Invaid "<<endl;	 	 	 	 	 	 	 	 
                return false;		
		}
		return true;
	}
	//
    void print()
    {
    	for(int i=0;i<3;i++)
    	{
    		cout<<"\t\t\t";
    		for(int j=0;j<3;j++)
    		{
    			cout<<grid[i][j]<<" ";
			}
			cout<<endl;
		}
	}
};
//
void StartMenu()
{
	system("CLS");
	cout<<"\t\t\t Task 3"<<endl;
	cout<<"\t\t     TIC TAC TOE GAME"<<endl;
	cout<<endl;
	cout<<"\t\t Choose Position From this Grid "<<endl;
	printgridposition();
	cout<<endl;
	cout<<"\t\t Player 1 Symbol 'X' \n \t\t Player 2 Symbol 'O' "<<endl;
	cout<<endl;
	TicTacToe Player1;
	TicTacToe Player2;
	int a,b;
	for(int i=0;i<9;i++)
	{
       if(i%2==0)
       {
       	 if(i!=0)
       	 {
       	 	Player1.Insert('O',b);
		 }
		 again:
		 cout<<"\t\t\t Player 1 \n";
		 cout<<"Enter the Position: ";
		 cin>>a;
		 if(Player1.Insert('X',a))
		 {
		 	Player1.print();
		 }
		 else
		 {
		 	cout<<endl<<"Occupied Position, Enter position again"<<endl;
		 	goto again;
		 }   
	   }
	   else
	   {
	   	Player2.Insert('X',a);
	   	again1:
	   	 cout<<"\t\t\t Player 2 \n";	
		 cout<<"Enter the Position: ";
		 cin>>b;
		 if(Player2.Insert('O',b))
		 {
		    Player2.print();
		 }
		 else
		 {
		 	cout<<endl<<"Occupied Position, Enter position again"<<endl;
		 	goto again1;
		 }
		  
	   }
	}
}
//
int main()
{
	StartMenu();
}