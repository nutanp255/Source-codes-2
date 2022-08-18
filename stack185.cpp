#include<iostream>
using namespace std;

template <class T>
struct node
{
	T data;
	struct node *next;
};

template <class T>
class Stack
{
	public:
	  struct node<T> *head;
	  int Count;
	  
	  Stack();
	  void push(T);	//insertlast
	  T pop();	//deletefirst
	  void Display();
	  int CountNode();
};
template <class T>
 Stack<T>:: Stack()
{
	head=NULL;
	Count=0;
}

template <class T>
void Stack::push(T no)
{
	struct node<T> *newn=NULL;
	newn=newn node<T>;
	
	newn->data=no;
	newn->next=NULL;
	
	newn->next=head;
	head=new;
	Count++;
}

template<class T>
void Stack<T>::pop()	//deletefirst
{
	T no;
	if(Count==0)
	{
		cout<<"Stack is empty"<<endl;
		return;
	}
	if(Count==1)
	{
		no=head->data;
		delete head;
		head=NULL;
		
	}
	else
	{
		no=head->data;
		struct node<T>*temp=head;
		head=head->next;
		delete temp;
		
	}
	Count--;
	cout<<"Removed element is:"<<no<<endl;
}

template<class T>
void Stack<T>::Display()
{
	cout<<"Element from linked list are:"<<endl;
	struct node<T>*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

template<class T>
int Stack<T>::CountNode()
{
	return Count;
}
int main()
{
	Stack<char>obj1;
	obj1.push('a');
	obj1.push('b');
	obj1.push('c');
	obj1.push('d');

	obj1.Display();
	
	obj1.pop();
	obj1.pop();
	
	return 0;
}