#include<stdio.h>
#include<conio.h>
int main ()
{
	int x,y,i,j,m,c,counter, result[50], data[3][3];
	char move ;






	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("enter the element %d %d ",i+1,j+1);
		scanf("%d",&data[i][j]);

	}

}


for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("\t%d  ",data[i][j]);
	}
	printf("\n");
}

printf("enter the element to be searched");
scanf("%d",&c);

x=4;
y=4;

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	if(data[i][j]==c)
		{
		x=i;
		y=j;
		break;

		}

	}
}


if(x<=2&&y<=2)
{
	printf("element %d found at location %d %d",c,x+1,y+1);

}else
{
    res=0;
	goto RESULT;

}
i=x;
j=y;
    printf("enter the no of moves\n");
	scanf("%d",&m);
	result[0]  = data[i][j] ;
	for(counter=1;counter<=m;counter++)
	{
		printf("enter the direction of move\n");
		scanf(" %c",&move);
		if (move == 'l'|| move =='L')
		{
			j =j-1;
		}else if (move == 'r'|| move =='R')
		{
			j = j+1;
		}else if (move == 'u'|| move =='U')
		{
			i =i-1;
		}else if (move =='d'|| move =='D')
		{
			i =i+1;
		}else
		{
		    printf("move not identified\n");
		}
			if ((i==0 || i==1 || i==2) && (j==0 || j==1 || j==2))
			{
			    result[counter] = data[i][j];
			}else
			{
			    result[counter] = 10;
			}
		}

		for(counter=0;counter<= m;counter++)
		{
			if (counter == 0)
			{
				printf ("initial location is %d\n",result[0]);
			}else if ( result[counter] == 10)
			{   printf("path not defined for %dth move",counter);
                break;
			}else
			{
				printf("location after %dth move is %d\n",counter,result[counter]);
			}

		}

    getch();
	return 0;

}
