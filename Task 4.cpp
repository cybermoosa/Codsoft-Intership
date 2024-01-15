#include<iostream>
using namespace std;
void Start();
//
class Node
{
public:
   Node* next;
   Node* prev;
   int TaskNumber;
   string Task;
   Node(int n,string t)
   {
   	 next=NULL;
   	 prev=NULL;
   	 TaskNumber=n;
   	 Task=t;
   }	
}; 
//
class ToDoList
{
	Node* head;
	Node* tail;
public:
   	ToDoList()
   	{
   		head=NULL;
   		tail=NULL;
	}
	//
	void InsertTask(int n,string t)
	{
		Node* Newnode=new Node(n,t);
		if(head==NULL)
		{
			head=Newnode;
			tail=Newnode;
		}
		else
		{
			tail->next=Newnode;
			Newnode->prev=tail;
			cout<<endl<<"Task Successfully Inserted! "<<endl;
			
		}
	}
	//
	void DeleteTask(int n)
	{
		if(head==NULL)
		{
			cout<<endl<<"List is Empty"<<endl;
		}
		else
		{
			Node* temp=head;
			while(temp!=NULL)
			{
				if(temp->TaskNumber==n)
				{
					temp->next->prev=temp->prev;
					temp->prev->next=temp->next;
					delete[] temp;
					cout<<endl<<"Task Deleted Successfully"<<endl;
					break;
				}
				temp=temp->next;
			}
		}
	}
	//
	void Print()
	{
		Node* temp=head;
		cout<<"Sig.No "<<"\t "<<"Task"<<endl;
		cout<<"-----------------------------------"<<endl;
		while(temp!=NULL)
		{
			cout<<temp->TaskNumber<<" \t"<<temp->Task<<endl;
			temp=temp->next;
		}
	}
};
//
void Start()
{
	ToDoList tasks;
   	cout<<"\t\t To Do List "<<endl;
   	cout<<"------------------------------------------------------------"<<endl;
   	for(;;)
   	{
	char choice;
	cout<<endl;
	cout<<"\t\t Press 'a' to Inser Task \n \t\tPress 'b' to Remove Task \n \t\tPress 'c' to View List \n \t\tPress 'd' to Quit: ";
   	cin>>choice;
   	switch(choice)
   	{
   		case 'a':
   			{
		        int n;
		        string work;
		        cout<<"Enter the Serial/Unique Number to the Task: ";
		        cin>>n;
		        cout<<"Enter the Task: ";
		        cin>>work;
		        tasks.InsertTask(n,work);
		        break;
	     	}
		case 'b':
			{
			    int n1;
			    cout<<"Enter the Serial/Unique Number of the Task: ";
		        cin>>n1;
		        tasks.DeleteTask(n1);
		        break;
	        }
		case 'c':
			{
		        tasks.Print();
			    break;
			}
		case 'd':
		    {
		      	cout<<endl<<"Thank You For Your Time"<<endl;
		      	exit(0);
			}	
		default:
		        cout<<"\n Invalid  key \n";
	
    }
 
 }
}

int main()
{
    Start();
}
 