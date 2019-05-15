#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct a
{
	char name[20];
	struct a  *up;
	struct a *down;
	struct a *left;
	struct a *right;

};
int main()
{
	FILE *fpd;
	struct a **n,*t,b;
	int p,x=0,sz,I,J,f=0;
	char ch,l,u,d,r;
	n=(struct a**)malloc(sizeof (struct a));





fpd=fopen("p3.txt","r");
if(fpd==NULL)
{
	printf("CAN NOT OPEN THE FILE :{");
}else

{
	printf("file open successfully\n");
	I=0;
	J=0;
	while(!feof(fpd))
	{
	ch=fgetc(fpd);
		if(ch=='\t')
		J=J+1;
		printf("tab is encountered\n");
		if(ch=='\n')
		{


		        printf("new line is encountered\n");
		    I=I+1;

		}


	}
	//I=I-2;
	//J=J-2;
	//J=J/(I-1);

    sz=I*J;
	printf(" %d\t %d\t%d/t",I,J,sz);





rewind(fpd);
			while(!feof(fpd)){
			    for (p=0;p<sz;p++)
	{
		n[p]=(struct a*)malloc(sizeof (struct a));
//fflush(stdin);
fscanf(fpd, " %s",n[p]->name);
printf("value of n is... %u\n",n[p]);
/*if(strcmp(n[p]->name,current_location))
{
f=1;
break;
}


}
if(  f==1)
{

break;
}*/

printf(" %s\n",n[p]->name);

/*for(x=0;x<p;x++)
		{
		   if(strcmp(n[x]->name,n[p]->name)==0)
			{
				printf("value is repeated\tenter another element ");
			break;
				scanf("%s",n[p]->name);
				x--;

			}


	}*/
}

			}








			for (p=0;p<sz;p++)
		{
//n[p]=n[p-l];
			//printf("printing loop is running");
			//printf("value of n is... %u\n",n[p]);

			printf("%s\t\t",n[p]->name);
			if((p+1)%I==0)
			printf("\n");

		}
		for(p=0;p<sz;p++)
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

		for(p=0;p<sz;p++)
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






fclose(fpd);






	  return 0;
}

}

