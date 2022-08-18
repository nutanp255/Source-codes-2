#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node* next;
	struct node *prev;
};
typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCLL
{
	private:
	    PNODE head;
		PNODE tail;
		int CountNode;
		
	public:	
		DoublyCLL();
		void InsertFirst(int);
		void InsertLast(int);
		void InsertAtPos(int,int);
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int);
		
		int Count();
		void Display();
};
DoublyCLL::DoublyCLL()
{
	head=NULL;
	tail=NULL;
	CountNode=0;
}

void DoublyCLL::InsertFirst(int iNo)
{
	PNODE newn=NULL;
	newn=new NODE;
	
	newn->data=iNo;
	newn->next=NULL;
	newn->prev=NULL;
	
	if(CountNode==0)	//if((head==NULL)&&(tail==NULL))
	{
		head=newn;
		tail=newn;
	}
	else
	{
		newn->next=head;
		head->prev=newn;
		head=newn;
	}
	head->prev=tail;
	tail->next=head;
	CountNode++;
}

void DoublyCLL::InsertLast(int iNo)
{
	PNODE newn=NULL;
	newn=new NODE;
	
	newn->data=iNo;
	newn->next=NULL;
	newn->prev=NULL;
	
	if(CountNode==0)	//if((head==NULL)&&(tail==NULL))
	{
		head=newn;
		tail=newn;
	}
	else
	{
		tail->next=newn;
		newn->prev=tail;
		
		tail=newn;
	}
	head->prev=tail;
	tail->next=head;
	CountNode++;
}

void DoublyCLL::InsertAtPos(int iNo,int iPos)
{
	if((iPos<1)||(iPos>CountNode+1))
	{
		cout<<"Invalid position\n";
		return;
	}
	else if(iPos==1)
	{
		InsertFirst(iNo);
	}
	else if(iPos==CountNode+1)
	{
		InsertLast(iNo);
	}
	else
	{
		PNODE newn=NULL;
		newn=new NODE;
	
		newn->data=iNo;
		newn->next=NULL;
		newn->prev=NULL;
		
		PNODE temp=head;
		for(int i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		newn->next=temp->next;
		temp->next->prev=newn;
		temp->next=newn;
		newn->prev=temp;
		
		CountNode++;
	}
}

void DoublyCLL::DeleteFirst()
{
	
	if(CountNode==0)
	{
		return;
	}

	else if(CountNode==1)
	{
		delete head;
		head=NULL;
		tail=NULL;
	}
	else
	{
		head=head->next;
		delete tail->next;		//delete head->prev;
	}
	tail->next=head;
	head->prev=tail;
	CountNode--;
}

void DoublyCLL::DeleteLast()
{
	if(CountNode==0)
	{
		return;
	}

	else if(CountNode==1)
	{
		delete head;
		head=NULL;
		tail=NULL;
	}
	else
	{
		tail=tail->prev;
		delete tail->next;		//delete head->prev;
	}
	tail->next=head;
	head->prev=tail;
	CountNode--;
}

void DoublyCLL::DeleteAtPos(int iPos)
{
	if((iPos<1)||(iPos>CountNode))
	{
		cout<<"Invalid position\n";
		return;
	}
	else if(iPos==1)
	{
		DeleteFirst();
	}
	else if(iPos==CountNode)
	{
		DeleteLast();
	}
	else
	{
		PNODE temp=head;
		for(int i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		temp->next=temp->next->next;
		delete temp->next->prev;
		temp->next->prev=temp;
		
		CountNode--;
	}		
}

void DoublyCLL::Display()
{
	int i=0;
	PNODE temp=NULL;
	
	for(i=1;i<=CountNode;i++)
	{
		cout<<"|"<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"\n";
}
int DoublyCLL::Count()
{
	return CountNode;
}
int main()
{
	int iRet=0;
	
	DoublyCLL obj;
	obj.InsertFirst(111);
	obj.InsertFirst(101);
	obj.InsertLast(202);
	obj.InsertLast(121);
	obj.InsertFirst(51);
	
	obj.Display();
	iRet=obj.Count();
	cout<<"Number of nodes are:"<<iRet<<endl;
	
	obj.InsertAtPos(21,1);
	obj.Display();
	iRet=obj.Count();
	cout<<"Number of nodes are:"<<iRet<<endl;
	

	return 0;
}