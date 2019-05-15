#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct a
{
	char name[20];
	struct a *up;
	struct a *down;
	struct a *left;
	struct a *right;

};
int main()
{
	struct a **n,*t,b;
	int p,x=0;
	char ch,l,u,d,r;
	//n=malloc(9*sizeof (struct a));
	n=(struct a**)malloc(20*sizeof (struct a));

	for (p=0;p<9;p++)
	{
			n[p]=(struct a*)malloc(sizeof (struct a));
		//n[p]=malloc(sizeof (struct a));
		printf("node n[%d]\t",p);
		scanf("%s",n[p]->name);

		for(x=0;x<p;x++)
		{
		   if(strcmp(n[x]->name,n[p]->name)==0)
			{
				printf("value is repeated\tenter another element ");
				scanf("%s",n[p]->name);
				x--;
			}
			}

		}

			for (p=0;p<9;p++)
		{

			printf("\t %s \t",n[p]->name);
			if((p+1)%3==0)
			printf("\n");

		}
		for(p=0;p<9;p++)
		{

			if(p==0||p==1||p==2 )
			{
				n[p]->up=NULL;
			}else
			{
				n[p]->up=n[p-3];
			}


			if(p==6||p==7||p==8 )
			{
				n[p]->down=NULL;
			}else
			{
				n[p]->down=n[p+3];
			}


			if(p==2||p==5||p==8 )
			{
				n[p]->right=NULL;
			}else
			{
				n[p]->right=n[p+1];
			}


			if(p==0||p==3||p==6 )
			{
				n[p]->left=NULL;
			}else
			{
				n[p]->left=n[p-1];
			}

		}


		printf("enter the current node");
		scanf("%s",b.name);

		for(p=0;p<9;p++)
		{
			if(strcmp(b.name,n[p]->name)==0)
		{
			t=n[p];
			break;
		}
		else
		{
			t=NULL;
		}
		}


	while(t!=NULL)
	{
	printf("enter the dirn of move");
	scanf(" %c",&ch);
	if(ch=='u')
	{
		t=t->up;
	}

		if(ch=='l')
	{
		t=t->left;
	}

		if(ch=='d')
	{
		t=t->down;
	}

		if(ch=='r')
	{
		t=t->right;
	}

		if(ch=='e')
	{
		t=NULL;
	}


		if(t!=NULL)
		printf("you are at node %s\n",t->name);
		else
		printf("------------------END!!!------------------");


	}

















	  return 0;

}
