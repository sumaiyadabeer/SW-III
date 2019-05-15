#include<iostream>

using namespace std;


class base_class
{
	
int stque[20];
int counter;


public:


	void insert_at_head();
//	void insert_at_tail();	
	int delete_at_head();
	int delete_at_tail();	
	bool is_empty();
	void display();
	
	base_class(){
		for(counter=0;counter<20;counter++)
		{
	    stque[counter]=0;			
		}
		
	}
};



class stack:public base_class
{
	public:
		int pop();
		void push();
}; 


class queue : public base_class
{
	public:
		int deque();
		void enque();
	
};




	void base_class :: insert_at_head()
	{
	int value;
	cout<<"enter value to insert at head"<<endl;
	cin>>value;
	for(counter=0;counter<20;counter++)
	{
		if(stque[counter]==0)
		{
			stque[counter]=value;
			break;
		}
	}
		
	}
	
	
	bool base_class :: is_empty()
	{
		if(stque[0]==0)
		{
			return true;
		}else
		{
		return false;
		}
		
	}


/*void linklist :: insert_at_tail()
	{
	int value;
	cout<<"enter value to insert at tail"<<endl;
	cin>>value;
	struct node *temp,*p; 
	temp=create_node(value);
	p=start;
	if(start==0)
	{
		start=temp;
		start->next=0;
	}else
	{
  while(p->next!=0)
	{
     p=p->next;	
	}
	p->next=temp;
	temp->next=0;
}
}
*/




int base_class :: delete_at_head()
{
	int t;
	int i;
	if(!is_empty())
	{
	t=stque[0];
	for(counter=0;counter<20;counter++){
		if(stque[counter+1]==0){
			stque[counter]=0;
			break;
		}else{
		for(i=0;i<counter+20;i++){
				stque[i]=stque[i+1];	
		}	
	
		}
			return t;	
	}	
	}
	
	else
	{
	cout<<"no element to delete"<<endl;	
	return -1;	
	}
	
}



int base_class :: delete_at_tail()
{
	int t;
	if(!is_empty())
	{
	for(counter=0;counter<20;counter++)
	{
		if(stque[counter]!=0){
		t=stque[counter];
		}else{
		stque[counter-1]=0;
		break;	
		}
				
	}
	return t;	
	}
	
	else
	{
	cout<<"no element to delete"<<endl;	
	return -1;	
	}
		
	
}

void base_class :: display()
{
if(stque[0]==0){
cout<<".....empty......."<<endl;	
	
}else
{
for(counter=0;counter<20;counter++)
{
	if(stque[counter]==0)
	break;
	
	cout<<"........."<<stque[counter];
}	
	
}
}


int stack :: pop()
{
	int t=delete_at_tail();
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
insert_at_head();

}



int main()
{
base_class l;
stack s;
queue q;
int choice;
while(1)
{
	cout<<endl<<endl;
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
