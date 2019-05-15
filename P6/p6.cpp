#include<iostream>

using namespace std;

 struct node{
int value;	
node *next;
	
};
class linklist
{
node *start;

public:

	node *create_node(int);
	void insert_at_head();
	void insert_at_tail();	
	int delete_at_head();
//	void delete_at_tail();	
	void is_empty();
	void display();
	
	linklist(){
	start=NULL;		
	}
};



class stack:public linklist
{
	public:
		int pop();
		void push();
}; 


class queue : public linklist
{
	public:
		int deque();
		void enque();
	
};

 node *linklist :: create_node(int val)
{
  struct node *temp;
  temp=new (struct node);
   if(temp==NULL)
  {
	cout<< "memory not allocate"<<endl;
	return 0;
  }else
  {
	temp->value=val;
	temp->next=NULL;
	return temp;
  }		
}


	void linklist :: insert_at_head()
	{
	int value;
	cout<<"enter value to insert at head"<<endl;
	cin>>value;
	struct node *temp,*p; 
	temp=create_node(value);
	if(start==NULL)
	{
		start=temp;
		start->next=NULL;
	}else
	{
		p=start;
		start=temp;
		start->next=p;
	}	
		
	}
	


void linklist :: insert_at_tail()
	{
	int value;
	cout<<"enter value to insert at tail"<<endl;
	cin>>value;
	struct node *temp,*p; 
	temp=create_node(value);
	p=start;
	if(start==NULL)
	{
		start=temp;
		start->next=NULL;
	}else
	{
  while(p->next!=NULL)
	{
     p=p->next;	
	}
	p->next=temp;
	temp->next=NULL;
}
}




int linklist :: delete_at_head()
{
	if(start!=NULL)
	{
		int t=start->value;
	start=start->next;	
		return t;
		
	}
	
	else
	{
	cout<<"no element to delete"<<endl;	
	return -1;	
	}
	
}



/*void linklist :: delete_at_tail()
{
	
	
}*/

void linklist :: display()
{
	struct node *temp;
	if(start==NULL)
	{
	cout<<"list is empty"<<endl;
	return ;	
	}
	temp=start;
	while(temp!=NULL)
	{
		cout<<temp->value<<"  --  ";
		temp=temp->next;
	}
cout<<"NULL"<<endl;	
}


int stack :: pop()
{
	int t=delete_at_head();
	return t;	
 
}

void stack :: push()
{
	insert_at_head(); 
}

int queue :: deque()
{
	int t=delete_at_head();
	return t;	
}


void queue :: enque()
{
insert_at_tail();

}



int main()
{
linklist l;
stack s;
queue q;
int choice;
while(1)
{
    cout<<"1 pop in stack"<<endl;
	cout<<"2 push in stack"<<endl;
	cout<<"3 deque in queue"<<endl;
	cout<<"4 enque in queue"<<endl;
	cout<<"5 display stack"<<endl;
	cout<<"6 display queue"<<endl;
	cout<<"7 exit"<<endl;
	cout<<"enter your choice"<<endl;
	cin>> choice;
	int t;
	
	switch (choice)
	{
		       case 1:
		       	t=s.pop();
		       	if(t==(-1))
		       	{
		       		cout<<" stack empty"<<endl;
		       	}
		       	else
		       	{
		       		cout<<"POP value  "<<t<<endl;
		       	}
			break;
		       case 2:
		       	s.push();
			break;
				case 3:
					t=q.deque();
		       	if(t==(-1))
		       	{
		       		cout<<" queue empty"<<endl;
		       	}
		       	else
		       	{
		       		cout<<"value after deque "<<t<<endl;
		       	}
			break;
				case 4:
					q.enque();
			break;
				case 5:
					cout<<"STACK"<<endl;
					s.display();
			break;
				case 6:
					cout<<"QUEUE"<<endl;
					q.display();
			break;
				case 7:
					exit(1);
			break;
	      default:
	      	cout<<"wrong choice"<<endl;
	}
		
}
/*while(1)
{
	cout<<"1 insert node at head"<<endl;
	cout<<"2 insert node at tail"<<endl;
	cout<<"3 delete node at head"<<endl;
	cout<<"4 DISPLAY..."<<endl;
	cout<<"5 exit"<<endl;
	cout<<"enter your choice"<<endl;
	cin>> choice;
	
	
	switch (choice)
	{
		case 1:
		 l.insert_at_head();	
			
			break;
		case 2:	
		l.insert_at_tail();
		
		
			break;
		case 3:
		
		l.delete_at_head();
		
			
			break;
		case 4:
		l.display();
		
			break;
		case 5:
			exit(1);			
			break;			
		default:
		  cout<<"wrong choice"<<endl;
			
	}
}*/	


return 0;	
}
