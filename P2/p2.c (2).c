#include <stdio.h>
#include<conio.h>
int main()
{
int i,j,x,y,b,m,counter;
char data [3][3],c,o, mov,result[50],*res,*k,*t;
for(i=0;i<3;i++) //storing array
{
	for(j=0;j<3;j++)
	{
		printf("enter the element %d %d\n ",i+1,j+1);
		scanf(" %c",&data[i][j]);

	}

}


for(i=0;i<3;i++) //printing array
{
	for(j=0;j<3;j++)
	{
		printf("\t%c  ",data[i][j]);
	}
	printf("\n");
}

printf("enter the element to be searched\n");
scanf(" %c",&c);

b=0;
for(i=0;i<3;i++) //search initial location
{
	for(j=0;j<3;j++)
	{
	 if(data[i][j]==c)
		{

		t=&data[i][j];
		result[0]=*t;

		b=1;
		break;
		}else
		{
			result[0]=100;

		}

	}
	if(b==1)
			{
			break;
			}

}


k=&data[0][0];
*t=t[i*3+j];


if(result[0]!=100)
{
	printf("enter the no of move\n");
	scanf(" %d",&m);

	for(counter=1;counter<=m;counter++)
	{
		printf("enter the direction of %d move\n",counter);
		scanf(" %c",&mov);
	*t=t[i*3+j];

        if (mov == 'l'|| mov =='L')
		{   if(j>=1)
            {
                *t=t[((i*3)+j)-1];
            }else
            {
                t = NULL;
            }

		}else if (mov == 'r'|| mov =='R')
		{
			if(j<=1)
            {
                *t=t[((i*3)+j)+1];
            }else
            {
                t = NULL;
            }
		}else if (mov == 'u'|| mov =='U')
		{
			if(i>=1)
            {
            *t=t[((i*3)+j)-3];
            }else
            {
                t= NULL;
            }
		}else if (mov =='d'|| mov =='D')
		{
			if(i<=1)
            {
            *t=t[((i*3)+j)+3];
            }else
            {
                t= NULL;
            }
		}else
		{
			t=&o;
		}



            if(t!=NULL && t!=&o)
            {

			result[counter] = *t ;
            } else if (t==NULL)
            {
             result[counter] = 'b';
             }else
            {
             result[counter] = 'v' ;
             }


		}
    for(counter=0;counter<=m;counter++)
    {
     if(result[counter]=='b'||result[counter]=='v')
        {
            if(result[counter]=='b')
            {
             printf("sorry path is blocked\n");
            }else
            {
             printf("move not defind\n");
            }


        }else
        {
            if(counter==0)
            {
              printf("initial location is%c\n",result[counter]);
            }else
            {
                printf("location after %d move is %c\n" ,counter,result[counter]);
            }
        }


    }






}else
{
    printf("initial location is not present");
}

getch();
return(0);
}

