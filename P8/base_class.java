
import java.util.*;
import java.io.*;

public class base_class
{
	
private int stque[]=new int[20];
private  int counter;



public base_class()
{
		for(counter=0;counter<20;counter++)
		{
	    stque[counter]=0;			
		}
		
}

public static void main(String[] args)
{
base_class l=new base_class();
stack s=new stack();
queue q= new queue();
int choice;
int ch=0;
while(ch!=7)
{
	System.out.println();
        System.out.println();
        System.out.println("1 pop in stack");
	System.out.println("2 push in stack");
	System.out.println("3 deque in queue");
	System.out.println("4 enque in queue");
	System.out.println("5 display stack");
	System.out.println("6 display queue");
	System.out.println("7 exit");
	System.out.println("enter your choice");
	Scanner scan= new Scanner(System.in);
	choice=scan.nextInt();
	int t;
	
	switch (choice)
	{
		       case 1:
		       	t=s.pop();
		       	if(t==(-1))
		       	{
		       		System.out.println(" stack empty");
		       	}
		       	else
		       	{
		       		System.out.println("POP value  "+t);
		       	}
			break;
		       case 2:
		       	s.push();
			break;
				case 3:
					t=q.deque();
		       	if(t==(-1))
		       	{
		       		System.out.println(" queue empty");
		       	}
		       	else
		       	{
		       		System.out.println("value after deque "+t);
		       	}
			break;
				case 4:
					q.enque();
			break;
				case 5:
					System.out.println("STACK");
					s.display();
			break;
				case 6:
					System.out.println("QUEUE");
					q.display();
			break;
				case 7:
					ch=7;
			break;
	      default:
	      	System.out.println("wrong choice");
	}
		
}

	
}

	public void insert_at_head()
	{
	int value;
	System.out.println("enter value to insert at head");
	Scanner scan =new Scanner(System.in);
        value=scan.nextInt();
	for(counter=0;counter<20;counter++)
	{
		if(stque[counter]==0)
		{
			stque[counter]=value;
			break;
		}
	}
		
	}
	
	
	public boolean  is_empty()
	{
		if(stque[0]==0)
		{
			return true;
		}else
		{
		return false;
		}
		
	}






public int delete_at_head()
{
	int t;
	int i;
	if(!is_empty())
	{
	t=stque[0];
	for(counter=0;counter<20;counter++)
	{
		if(stque[counter+1]==0)
		{
			stque[counter]=0;
			break;
		}
		else
		{
		for(i=0;i<counter+15;i++)
		{
				stque[i]=stque[i+1];	
		}	
	
	}
	
			return t;
		}
	}	
	else
	System.out.println("no element to delete");	
	return -1;	
	
}



public int delete_at_tail()
{
	int t=-1;
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
	System.out.println("no element to delete");	
	return t;	
	}
		
	
}

public void  display()
{
if(stque[0]==0)
{
System.out.println(".....empty.......");	
	
}else
{
for(counter=0;counter<20;counter++)
{
	if(stque[counter]==0)
	break;
	
	System.out.println("........."+stque[counter]);
}	
	
}
}




	

};


 class stack extends base_class
{
	
	public int  pop()
{
	int t=delete_at_tail();
	return t;	
 
}

public void  push()
{
	insert_at_head(); 
}
}; 


class queue extends base_class
{
	
	public int deque()
{
	int t=delete_at_head();
	return t;	
}


public void enque()
{
insert_at_head();

}	
	
};












