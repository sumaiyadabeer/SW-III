#include<stdio.h>
#include<conio.h>
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
	int p,x,sz,I,J,j,k;
	char   ch,chp,l,u,d,r,current_location[25],move1[15],move2[15];
	n=(struct a**)malloc(20*sizeof (struct a));






fpd=fopen("p3d.txt","r");
if(fpd==NULL)
{
	printf("CAN NOT OPEN THE FILE :{");
}else

{
	printf("file open successfully\n");





fpd=fopen("p3.txt","r");
if(fpd==NULL)
{
	printf("CAN NOT OPEN THE FILE :{");
}else

{
	printf("file open successfully\n");
	I=0;
	J=0;
	x=0;



	    while(!feof(fpd)){
	       //  printf("2 while loop execute");
	ch=fgetc(fpd);
		if(ch=='\t'){



		    printf("tab %d\n",J);
		J=J+1;
		}


		if(ch=='\n')
		{
  printf("line....%d\n",I);
		    if(ch==chp){



		    x=1;
printf("\nwhile loop 2 going to break");
		    break;
		    }

			I=I+1;

			}
			chp=ch;
			if(x==1)
			break;
	    }
	  //  I=I-2;
       // J=J/(I-1);

     //   J=J-1;
      J=J-1;
       J=(J)/I+1;
       J=J-1;

                    sz=I*J;
	printf(" %d\t %d\t%d",I,J,sz);
	rewind(fpd);
	x=0;
while(!feof(fpd)){
if(x<1){
			    for (p=0;p<sz;p++)
	{
	//    printf("pis %d sz is %d",p,sz);
		n[p]=(struct a*)malloc(sizeof (struct a));
fflush(stdin);
fscanf(fpd, "%s",n[p]->name);

printf(" %s\n",n[p]->name);
x=1;
}}


   if(x==1){
       fscanf(fpd, "%s",b.name);
    fscanf(fpd, "%s",b.name);
    fscanf(fpd, "%s",b.name);
        printf("currentlocation is %s\n",b.name);
   }else if(x==2){
    fscanf(fpd, "%s",move1);
    fscanf(fpd, "%s",move1);
    fscanf(fpd, "%s",move1);
   printf("first move is %s\n",move1);
   }else{
    fscanf(fpd, "%s",move2);
    fscanf(fpd, "%s",move2);
    fscanf(fpd, "%s",move2);
   printf("second move is %s\n",move2);
   }

x++;
	}
fclose(fpd);

}















			for (p=0;p<sz;p++)
		{


			printf("\t %s \t",n[p]->name);
			if((p+1)%I==0)
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
	//printf("enter the dirn of move");
//	scanf(" %c",&ch);
	    for(x=0;x<4;x++){
	        ch=move1[x];
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
	//t=NULL;
	break;
	}

		while(t!=NULL)
	{
	/*printf("enter the dirn of move");
	scanf(" %c",&ch);*/
	    for(x=0;x<4;x++){
	        ch=move2[x];
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
	t=NULL;
	break;
	}






fclose(fpd);




getch();
	  return 0;


}}

